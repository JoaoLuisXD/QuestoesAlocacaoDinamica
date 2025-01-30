#include <stdio.h>
#include <stdlib.h>
struct ponto
{
    float x;
    float y;
};
typedef struct ponto Ponto;
typedef Ponto * PPonto;
PPonto centro_geo(PPonto * lista_pontos,int n); 
int main()
{

    int n;
    printf("Quantidade de pontos: ");
    scanf("%d",&n);
    PPonto* coordenada = (PPonto*)malloc(n*sizeof(PPonto));
    for(int i=0;i<n;i++)
    {
        coordenada[i] = (PPonto)malloc(sizeof(Ponto));
        printf("X: ");
        scanf("%f",&coordenada[i]->x);
        printf("Y: ");
        scanf("%f",&coordenada[i]->y);
    }
    PPonto centro = centro_geo(coordenada,n);
    printf("centro x: %f\n",centro->x);
    printf("centro y: %f\n",centro->y);

    
}
PPonto centro_geo(PPonto * lista_pontos,int n)
{
    PPonto centro = (PPonto)malloc(n*sizeof(Ponto));
    float soma_x=0,soma_y=0;
    for(int i=0;i<n;i++)
    {
        soma_x += lista_pontos[i]->x;
        soma_y += lista_pontos[i]->y;
    }
    centro->x = soma_x/n;
    centro->y = soma_y/n;

    return centro;
}