#include <stdio.h>
#include <stdlib.h>
int pares(int n,int *vet);
int main()
{
    int n;
    printf("Insira o tamanho do vetor: ");
    scanf("%d%*c",&n);
    int *vet = (int*)malloc(n*sizeof(int));
    for(int i=0;i<n;i++)
    {
        scanf("%d%*c",&vet[i]);
    }
    printf("Quantidade de numeros pares: %d",pares(n,vet));
    free(vet);
    return 0;
}
int pares(int n,int *vet)
{
    int cont_par=0;
    for(int i=0;i<n;i++)
    {
        if(vet[i]%2==0)
        {
            cont_par++;
        }
    }
    return cont_par;
}