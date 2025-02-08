#include <stdio.h>
#include <stdlib.h>
struct ponto
{
    float x;
    float y;
};
typedef struct ponto Ponto;
typedef Ponto *PPonto;
PPonto centro_geo(PPonto * lista_pontos,int n);
int main()
{
    int n;
    printf("QTD PONTOS: ");
    scanf("%d",&n);
    PPonto *p = (PPonto*)malloc(n*sizeof(PPonto));
    for(int i=0;i<n;i++)
    {
        p[i] = (PPonto)malloc(sizeof(Ponto));
        printf("X: ");
        scanf("%f",&p[i]->x);
        printf("Y: ");
        scanf("%f",&p[i]->y);

    }
    PPonto centro = centro_geo(p,n);
    printf("%f\n",centro->x);
    printf("%f\n",centro->y);
    return 0;
}
PPonto centro_geo(PPonto * lista_pontos,int n)
{
    PPonto centro = (PPonto)malloc(sizeof(Ponto));
    float soma_x=0, soma_y=0;
    for(int i=0;i<n;i++)
    {
        soma_x += lista_pontos[i]->x;
        soma_y += lista_pontos[i]->y; 
    }
    centro->x = soma_x/n;
    centro->y = soma_y/n;
    return centro;
}