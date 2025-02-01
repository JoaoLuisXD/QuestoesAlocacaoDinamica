#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct paciente
{
    int id_paciente;
    char nome[100];
    int idade;
    int prioridade;
};
typedef struct paciente Paciente;
typedef Paciente * PPaciente;

PPaciente * cria_fila(int tam);
void insere_paciente(PPaciente *p,int tam);
PPaciente busca_paciente(PPaciente *p,int tam,int num);
void libera_fila(PPaciente *p,int tam);
PPaciente remove_paciente(PPaciente *p, int tam, int num);
int main()
{
    int tam = 2;
    int num;
    int id_removido;
    PPaciente * pacientes_fila = cria_fila(tam);
    insere_paciente(pacientes_fila,tam);
    printf("DIGITE O ID QUE QUER BUSCAR: ");
    scanf("%d",&num);
    PPaciente encontrado = busca_paciente(pacientes_fila,tam,num);
    if(encontrado != NULL)
    {
        printf("paciente achado\n");
        printf("id: %d\n",encontrado->id_paciente);
        printf("nome: %s",encontrado->nome);
        printf("idade: %d\n",encontrado->idade);
        printf("prioridade: %d\n",encontrado->prioridade);
    }
    else printf("esse paciente nao foi encontrado\n");
    printf("digite a prioridade do paciente que deseja remover: ");
    scanf("%d%*c",&id_removido);
    PPaciente saiu = remove_paciente(pacientes_fila,tam,id_removido);
    if(saiu != NULL)
    {
        printf("paciente removido !");
    }
    else printf("esse paciente nao esta aqui");
    libera_fila(pacientes_fila,tam);
    return 0;
}
PPaciente * cria_fila(int tam)
{
    PPaciente * fila_paciente = (PPaciente*)malloc(tam*sizeof(PPaciente));
    for(int i=0; i<tam; i++)
    {
        fila_paciente[i] = NULL;
    }
    return fila_paciente;
}
void insere_paciente(PPaciente *p,int tam)
{  
    for(int i=0;i<tam;i++)
    {
        
        if(p[i]==NULL)
        {
            p[i] = (PPaciente)malloc(sizeof(Paciente));
            printf("ID: ");
            scanf("%d%*c",&p[i]->id_paciente);
            printf("NOME: ");
            fgets(p[i]->nome,100,stdin);
            printf("IDADE: ");
            scanf("%d%*c",&p[i]->idade);
            printf("PRIORIDADE: ");
            scanf("%d%*c",&p[i]->prioridade);
        }
    }
}
PPaciente busca_paciente(PPaciente *p,int tam, int num)
{
    for(int i=0 ; i<tam ; i++)
    {
        if(p[i]->id_paciente == num)
        {
            return p[i];
        }
        
    }
    return NULL;
}
void libera_fila(PPaciente *p,int tam)
{
    for(int i=0; i<tam ; i++)
    {
        free(p[i]);
    }
    free(p);
}
PPaciente remove_paciente(PPaciente *p, int tam, int num)
{
    for(int i=0;i<tam;i++)
    {
        if(p[i]!=NULL && p[i]->prioridade == num)
        {
           PPaciente l = p[i];
           free(p[i]);
           p[i] = NULL;
           return l;
        }
    }
    return NULL;
}