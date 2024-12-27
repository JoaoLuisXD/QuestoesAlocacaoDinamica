#include <stdio.h>
#include <stdlib.h>
struct aluno
{
    char nome[100];
    int idade;
    float nota;
};
typedef struct aluno Aluno;
typedef Aluno * AAluno;
void imprime_aluno(AAluno aluno, int n);
int main()
{
    int n;
    printf("QUANTOS ALUNOS VOCE QUER VER OS DADOS: ");
    scanf("%d%*c",&n);
    AAluno aluno=(AAluno)malloc(n*sizeof(Aluno));
    for(int i=0;i<n;i++)
    {
        printf("DIGITE NOME, IDADE E NOTA DO ALUNO: \n");
        scanf("%s%*c",aluno[i].nome);
        scanf("%d%*c",&aluno[i].idade);
        scanf("%f%*c",&aluno[i].nota);
        printf("-------------------\n");
    }
    imprime_aluno(aluno,n);
    
    return 0;
}
void imprime_aluno(AAluno aluno, int n)
{
    for(int i=0;i<n;i++)
    {
        printf("NOME: %s\n",aluno[i].nome);
        printf("IDADE: %d\n",aluno[i].idade);
        printf("NOTA: %.2f\n",aluno[i].nota);
        printf("-------------------\n");
    }
}