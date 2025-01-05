#include <stdio.h>
#include <stdlib.h>
#include <string.h>
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
float media_turma(int n, AAluno turmas,char turma[8]);
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
    char turma[8];
    printf("DE QUAL TURMA VOCE QUER VER AS NOTAS ?\n");
    scanf("%s%*c",turma);
    float media = media_turma(n,alunos,turma);
    if(media > 0)
    {
        for(int i=0;i<n;i++)
        {
            printf("------------------------------\n");
            printf("NOME DO ALUNO: %s\n",alunos[i].nome);
        }
        printf("------------------------------\n");
        printf("MEDIA DA TURMA: %.2f\n",media);
        printf("------------------------------\n");
    }
    return 0;
}
float media_turma(int n, AAluno turmas,char turma[8])
{
    float cont=0,soma=0;
    for(int i=0;i<n;i++)
    {
        if(strcmp(turmas[i].turma, turma)==0)
        {
            float media_aluno = (turmas[i].p1 + turmas[i].p2 + turmas[i].p3) / 3;
            soma+=media_aluno;
            cont++;       
        }
    }
    if(cont>0)
    {
        return soma/cont;
    }
    else return 0;
}