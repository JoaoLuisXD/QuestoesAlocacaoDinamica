#include <stdio.h>
#include <stdlib.h>
float media(int n,float *notas);
int main()
{
    int n;
    printf("QUANTOS ESTUDANTES TEM NA TURMA: ");
    scanf("%d",&n);
    float *notas=(float *)malloc(n * sizeof(float));
    printf("------\n");
    printf("NOTAS:\n");
    
    for(int i=0;i<n;i++)
    {
        scanf("%f",&notas[i]);
    }
    float resultado=media(n,notas);
    printf("A MEDIA DA TURMA E: %.2f",resultado);
    return 0;
}
float media(int n,float *notas)
{
    float soma=0;
    for(int i=0;i<n;i++)
    {
        soma+=notas[i];
    }
    float med = soma/n;
    return med;
}