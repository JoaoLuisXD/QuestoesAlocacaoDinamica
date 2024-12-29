#include <stdio.h>
#include <stdlib.h>
struct ponto
{
    float x;
    float y;
};
typedef struct ponto Ponto;
typedef Ponto * PPonto;
PPonto centro_geo(PPonto puento,int num); 
int main()
{
    int num;
    printf("digite quantos pontos voce quer adicionar: ");
    scanf("%d%*c",&num);
    Ponto * puento = (Ponto*)malloc(num*sizeof(Ponto));
    if(puento == NULL)
    {
        printf("Erro");
        exit(404);
    }
    for(int i=0;i<num;i++)
    {
        printf("x : ");
        scanf("%f%*c",&puento[i].x);
        printf("y : ");
        scanf("%f%*c",&puento[i].y);
    }
    PPonto centro = centro_geo(puento,num);
    printf("centro geo de X = %.2f e Y = %.2f",centro->x,centro->y);
    return 0;
}
PPonto centro_geo(PPonto puento,int num)
{
    Ponto * centro = (Ponto*)malloc(sizeof(Ponto));
    float somax=0,somay=0;
    for(int i=0;i<num;i++)
    {
        somax += puento[i].x;
        somay += puento[i].y;
    }
    centro->x = somax/num;
    centro->y = somay/num;
    
    return centro;
}