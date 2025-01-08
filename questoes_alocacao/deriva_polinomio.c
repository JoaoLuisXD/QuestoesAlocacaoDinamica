#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void deriva(double *poli,int grau,double *drvd);
int main()
{
    int grau;
    printf("DIGITE O GRAU DO POLINOMIO: ");
    scanf("%d%*c",&grau);
    double *polinomio = (double*)malloc(grau*sizeof(double));
    double *derivada = (double*)malloc(grau*sizeof(double));
    for(int i=0;i<=grau;i++)
    {
        printf("DIGITE O %d NUMERO (grau %d): ",i+1,i);
        scanf("%lf%*c",&polinomio[i]);
    }
    deriva(polinomio,grau,derivada);
    for (int i = 0; i < grau; i++) 
    {
        printf("COEFICIENTE DO TERMO DE GRAU %d: %.2lf\n", i+1, derivada[i]);
    }

    return 0;
}
void deriva(double *poli,int grau,double *dervd)
{
    for(int i=1;i<=grau;i++) //não pega o primeiro termo, pq sempre vai ser zero
    {
        dervd[i-1]=poli[i]*i;
    }
}