#include <stdio.h>
#include <stdlib.h>
void matriz_simetrica(int l,int c, float **matriz);
int main()
{
    int l,c;
    printf("Informe as linhas e as colunas da matriz\n");
    printf("linhas: ");
    scanf("%d%*c",&l);
    printf("colunas: ");
    scanf("%d%*c",&c);
    float **matriz = (float**)malloc(l*sizeof(float*));
    for(int i=0;i<l;i++)
    {
        matriz[i]=(float*)malloc(c*sizeof(float));
        for(int j=0;j<c;j++)
        {
            scanf("%f%*c",&matriz[i][j]);
        }
    }
    matriz_simetrica(l,c,matriz);
    for(int i=0;i<l;i++)
    {
        free(matriz[i]);
    }
    free (matriz);
    return 0;
}
void matriz_simetrica(int l,int c, float **matriz)
{
    if(l!=c)
    {
        printf("MATRIZ NAO E SIMETRICA QUADRADA\n");
        return;
    }
   for(int i=0;i<l;i++)
    {
        for(int j=0;j<c;j++)
        {
            if(matriz[i][j]!=matriz[j][i])
            {
                printf("MATRIZ NAO E SIMETRICA\n");
                return;
            }
        }
    }
    printf("MATRIZ SIMETRICA");
}