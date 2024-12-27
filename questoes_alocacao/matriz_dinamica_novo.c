#include <stdio.h>
#include <stdlib.h>
void imprime_matriz(int **mat);
int main()
{
    int **matriz = (int**)malloc(3*sizeof(int*));
    for(int i=0;i<3;i++)
    {
        matriz[i]=(int*)malloc(3*sizeof(int));
        for(int j=0;j<3;j++)
        {
            scanf("%d%*c",&matriz[i][j]);
        }
    }
    imprime_matriz(matriz);
    return 0;
}
void imprime_matriz(int **mat)
{
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("%8d",mat[i][j]);
        }
        printf("\n");
    }
}