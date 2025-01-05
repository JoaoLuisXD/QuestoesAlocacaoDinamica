#include <stdio.h>
#include <stdlib.h>
struct aluno
{
    char nome[81];
    char matricula[8];
    char turma[8];
    float p1;
    float p2;
    float p3;
};
typedef struct aluno Aluno;
typedef Aluno * AAluno;
void imprime_aprovados(int n, AAluno turmas);
int main()
{
    int n;
    printf("DIGITE O NUMERO DE ALUNOS DA TURMA: ");
    scanf("%d%*c",&n);
    AAluno alunos = (AAluno)malloc(n*sizeof(Aluno));
    for(int i=0;i<n;i++)
    {
        printf("DIGITE O NOME DO ALUNO: ");
        scanf("%s%*c",alunos[i].nome);
        printf("DIGITE A MATRICULA DO ALUNO: ");
        scanf("%s%*c",alunos[i].matricula);
        printf("DIGITE A TURMA DO ALUNO: ");
        scanf("%s%*c",alunos[i].turma);
        printf("DIGITE A NOTA DA PROVA P1 DO ALUNO: ");
        scanf("%f%*c",&alunos[i].p1);
        printf("DIGITE A NOTA DA PROVA P2 DO ALUNO: ");
        scanf("%f%*c",&alunos[i].p2);
        printf("DIGITE A NOTA DA PROVA P3 DO ALUNO: ");
        scanf("%f%*c",&alunos[i].p3);
        printf("----------------------------------------\n");
    }
    imprime_aprovados(n,alunos);
    return 0;
}
void imprime_aprovados(int n, AAluno turmas)
{
    float media_aluno;
    for(int i=0;i<n;i++)
    {
        media_aluno = (turmas[i].p1 + turmas[i].p2 + turmas[i].p3) / 3;
        if(media_aluno>=7)
        {
            printf("!!!! ALUNO APROVADO !!!!\n");
            printf("--------------------------\n");
            printf("NOME DO ALUNO: %s\n",turmas[i].nome);
            printf("MATRICULA DO ALUNO %s\n",turmas[i].matricula);
            printf("TURMA DO ALUNO: %s\n",turmas[i].turma);
            printf("MEDIA DO ALUNO: %.2f\n",media_aluno);
            printf("--------------------------------------\n");
        }
    }
}