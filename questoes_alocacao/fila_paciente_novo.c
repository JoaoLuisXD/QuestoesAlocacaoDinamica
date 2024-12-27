#include <stdio.h>
#include <stdlib.h>
#define TAM 10
struct paciente
{
    int id_paciente;
    char nome[100];
    int idade;
    int prioridade;
};
typedef struct paciente Paciente;
typedef Paciente * PPaciente;
PPaciente * cria_fila(int n);
void inserir_paciente(PPaciente * fila,int n);

int main()
{
    PPaciente * fila_paciente = cria_fila(TAM);
    inserir_paciente(fila_paciente,TAM);
    return 0;
}
PPaciente * cria_fila(int n)
{
    PPaciente * fila=(PPaciente *)malloc(n*sizeof(Paciente));
    for(int i=0;i<n;i++)
    {
        fila[i]=NULL;
    }
    return fila;
}
void inserir_paciente(PPaciente * fila,int n)
{
    int i=0;
    for(int i=0;i<n;i++)
    {
        if(fila[i]==NULL)
        {
            break;
        }
    }
    if(i<n)
    {
        fila[i]= (PPaciente)malloc(sizeof(Paciente));
        if(fila[i]==NULL)
        {
            printf("SEM MEMORIA SUFICIENTE PARA ALOCAR\n");
            exit(404);
        }
        printf("DIGITE A PRIORIDADE DO PACIENTE: ");
        scanf("%d%*c",&fila[i]->prioridade);
        printf("DIGITE O ID DO PACIENTE: ");
        scanf("%d%*c",&fila[i]->id_paciente);
        printf("DIGITE O NOME DO PACIENTE: ");
        scanf("%100[^\n]",fila[i]->nome);
        printf("DIGITE A IDADE DO PACIENTE: ");
        scanf("%d%*c",&fila[i]->idade);
        printf("\n");
        printf("PACIENTE INSERIDO COM SUCESSO !!\n");
    }
    else
    {
        printf("FILA CHEIA\n");
    }
}