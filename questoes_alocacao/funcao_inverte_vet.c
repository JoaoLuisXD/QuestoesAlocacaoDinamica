#include <stdio.h>
#include <stdlib.h>
void inverte(int n,int *vet);
int main()
{
    int n;
    printf("Insira o tamanho do vetor: ");
    scanf("%d%*c",&n);
    int *vet=(int*)malloc(n*sizeof(int));
    for(int i=0;i<n;i++)
    {
        scanf("%d%*c",&vet[i]);
    }
    inverte(n,vet);
    printf("\n");
    for(int i=0;i<n;i++)
    {
        printf("%d\n",vet[i]);
    }
    return 0;
}
void inverte(int n,int *vet)
{
    int aux=0;
    for(int i=0;i<n/2;i++)
    {
         aux = vet[i];
         vet[i] = vet[n-1 -i];
         vet[n-1-i] = aux; 
    }
}