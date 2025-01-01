#include <stdio.h>
#include <stdlib.h>
int negativos(int n, float *vet);
int main()
{
    int n;
    printf("diga o tamanho do vetor: ");
    scanf("%d%*c",&n);
    float *vet = (float*)malloc(n*sizeof(float*));
    for(int i=0;i<n;i++)
    {
        scanf("%f%*c",&vet[i]);
    }
    printf("numero de negativos : %d",negativos(n,vet));
    return 0;
}
int negativos(int n, float *vet)
{
    int cont_neg=0;
    for(int i=0;i<n;i++)
    {
        if(vet[i]<0)
        {
            cont_neg++;
        }
    }
    return cont_neg;
}