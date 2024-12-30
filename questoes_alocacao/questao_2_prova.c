#include <stdio.h>
#include <stdlib.h>
struct ponto
{
    float x;
    float y;
};
typedef struct ponto Ponto;
typedef Ponto * PPonto;
PPonto centro_geo(PPonto  lista_pontos,int n);
int main()
{
    int n;
    printf("QUANTOS PONTOS VOCE QUER DIGITAR ?\n");
    printf("-------\n");
    scanf("%d%*c",&n);
    printf("-------\n");
    PPonto puento = (PPonto)malloc(n*sizeof(Ponto));
    for(int i=0;i<n;i++)
    {
        printf("x : ");
        scanf("%f%*c",&puento[i].x);
        printf("y : ");
        scanf("%f%*c",&puento[i].y);
    }
    PPonto centro = centro_geo(puento,n);
        printf("CENTRO X = %f e Y = %f", centro->x,centro->y);
    return 0;
}
PPonto centro_geo(PPonto lista_pontos,int n)
{
    PPonto centro = (PPonto)malloc(sizeof(Ponto));
    float somax=0,somay=0;
    for(int i=0;i<n;i++)
    {
        somax+=lista_pontos[i].x;
        somay+=lista_pontos[i].y;
    }
    centro->x = somax/n;
    centro->y = somay/n;
    return centro;
}