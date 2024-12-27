#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n,nnotas;
    float soma=0,media_aluno=0,soma_aluno=0;
    printf("DIGITE QUANTOS ALUNOS VOCE QUER OLHAR A NOTA: ");
    scanf("%d%*c",&n);
    float ** notas = (float **)malloc(n*sizeof(float*));
    printf("DIGITE A QUANTIDADE DE NOTAS: ");
    scanf("%d",&nnotas);
    for(int i=0;i<n;i++)
    {
        notas[i]=(float*)malloc(nnotas*sizeof(float));
        for(int j=0;j<nnotas;j++)
        {
            printf("DIGITE AS NOTAS DO ALUNO %d: ",i+1);
            scanf("%f%*c",&notas[i][j]);
            soma_aluno+=notas[i][j];
            soma+=notas[i][j];
        }
        media_aluno=soma_aluno/nnotas;
        printf("A MEDIA DO ALUNO %d E: %.2f\n",i+1,media_aluno);
        soma_aluno=0;
        
    }
    printf("A SOMA DA NOTAS DA TURMA E: %.2f\n",soma);
    float media=soma/(n*nnotas);
    printf("A MEDIA DA TURMA %.2f \n",media);
    
    return 0;
}