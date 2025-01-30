#include <stdio.h>
#include <stdlib.h>
float** cria_matriz(int linhas, int colunas); 
float** soma_matriz(float** A, int n, int m, float** B);  
void libera_matriz(float** A, int linhas);
int main()
{
    float **A = cria_matriz(2,2);
    float **B = cria_matriz(2,2);
    float **C = soma_matriz(A,2,2,B);
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            printf("A: %f\n",A[i][j]);
        }
    }
    printf("\n");
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            printf("B: %f\n",B[i][j]);
        }
    }
    printf("\n");
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            printf("C: %f\n",C[i][j]);
        }
    }
    printf("\n");
    libera_matriz(A,2);
    libera_matriz(B,2);
    libera_matriz(C,2);
}
float** cria_matriz(int linhas, int colunas)
{
    float **mat = (float**)malloc(linhas*sizeof(float*));
    for(int i=0;i<linhas;i++)
    {
        mat[i] = (float*)malloc(colunas*sizeof(float));
        for(int j=0;j<colunas;j++)
        {
            scanf("%f",&mat[i][j]);
        }
    }
    return mat;
}
float** soma_matriz(float** A, int n, int m, float** B)
{
    float **mat_resultante = (float**)malloc(n*sizeof(float*));
    for(int i=0;i<n;i++)
    {
        mat_resultante[i] = (float*)malloc(m*sizeof(float));
        for(int j=0;j<m;j++)
        {
            mat_resultante[i][j] = A[i][j] + B[i][j];
        }
    }
    return mat_resultante;
}
void libera_matriz(float** A, int linhas)
{
    for(int i=0;i<linhas;i++)
    {
        free(A[i]);
    }
    free(A);
}