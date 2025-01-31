#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct aluno
{
    int matricula;
    char * nome;
    int idade;
    char * curso;
};
typedef struct aluno Aluno;
typedef Aluno * AAluno;

AAluno cria_aluno(int n);
void libera_aluno(AAluno  a,int n);
void imprime_aluno(AAluno a,int n);
int main()
{
    int n;
    printf("QUANTOS ALUNOS TEM A SALA: ");
    scanf("%d",&n);
    AAluno alunos = cria_aluno(n);
    printf("\n");
    imprime_aluno(alunos,n);
    libera_aluno(alunos,n);
    return 0;
}
AAluno cria_aluno(int n)
{
    AAluno a = (AAluno)malloc(n*sizeof(Aluno));
    for (int i=0; i<n; i++)
    {
        printf("DIGITE A MATRICULA: ");
        scanf("%d",&a[i].matricula);
        getchar();
        printf("DIGITE O NOME: ");
        a[i].nome = (char*)malloc(100 * sizeof(char));
        fgets(a[i].nome,100,stdin);
        printf("DIGITE A IDADE: ");
        scanf("%d",&a[i].idade);
        getchar();
        printf("DIGITE O CURSO: ");
        a[i].curso = (char*)malloc(100 * sizeof(char));
        fgets(a[i].curso,100,stdin);
    }
    return a;
}
void libera_aluno(AAluno a,int n)
{
    for(int i=0;i<n;i++)
    {
        free(a[i].nome);
        free(a[i].curso);
    }
    free (a);
}
void imprime_aluno(AAluno a,int n)
{
    for(int i=0;i<n;i++)
    {
        printf("MATRICULA: %d\n",a[i].matricula);
        printf("NOME: %s",a[i].nome);
        printf("IDADE: %d\n",a[i].idade);
        printf("CURSO: %s\n",a[i].curso);

    }
}