#include <stdio.h>
#include <stdlib.h>
void imprime_vetor(int *vet);
int main()
{
    int *vet=(int*)malloc(3*sizeof(int));
    for(int i=0;i<5;i++)
    {
        scanf("%d%*c",&vet[i]);
    }
    imprime_vetor(vet);
    return 0;
}
void imprime_vetor(int *vet)
{
    for(int i=0;i<5;i++)
    {
        printf("%5d",vet[i]);
    }
}