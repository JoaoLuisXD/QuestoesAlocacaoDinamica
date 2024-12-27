#include <stdio.h>
#include <stdlib.h>
#include <math.h>
struct ponto
{
    float x;
    float y;
};
typedef struct ponto Ponto;
typedef Ponto * PPonto;
struct circulo
{
    Ponto c;
    float raio;
};
typedef struct circulo Circulo;
typedef Circulo * CCirculo;
void imprime_ponto(PPonto p,int num_p);
void imprime_circulo(CCirculo c);
float distancia(PPonto p1,PPonto p2);
int verifica_ponto(PPonto p,CCirculo c);
int main()
{
    PPonto p1=(PPonto)malloc(sizeof(Ponto));
    PPonto p2=(PPonto)malloc(sizeof(Ponto));
    printf("DIGITE OS VALORES DE X E Y DE P1: \n");
    scanf("%f%*c",&p1->x);
    scanf("%f%*c",&p1->y);
    printf("DIGITE OS VALORES DE X E Y DE P2: \n");
    scanf("%f%*c",&p2->x);
    scanf("%f%*c",&p2->y);
    imprime_ponto(p1,1);
    imprime_ponto(p2,2);
    CCirculo c1=(CCirculo)malloc(sizeof(Circulo));
    printf("DIGITE OS VALORES DE X E Y DO CIRCULO: \n");
    scanf("%f%*c",&c1->c.x);
    scanf("%f%*c",&c1->c.y);
    printf("DIGITE O RAIO DO CIRCULO: \n");
    scanf("%f%*c",&c1->raio);
    imprime_circulo(c1);
    printf("O PONTO P1 ESTA ");
    if(verifica_ponto(p1,c1)==1)
    {
        printf("DENTRO DO CIRCULO\n");
    }
    else
    {
        printf("FORA DO CIRCULO\n");
    }

free(p1);
free(p2);
free(c1);
return 0;
}
void imprime_ponto(PPonto p,int num_p)
{
    printf("O PONTO P%d ESTA LOCALIZADO EM X = %.2f E Y = %.2f\n",num_p,p->x,p->y);
}
void imprime_circulo(CCirculo c)
{
    printf("OS PONTOS DO CIRCULO ESTAO LOCALIZADOS EM X = %.2f E Y = %.2f\n",c->c.x,c->c.y);
    printf("RAIO DO CIRCULO = %.2f\n",c->raio);
}
float distancia(PPonto p1,PPonto p2)
{
    return sqrt(pow((p1->x - p2->x),2) + pow((p1->y - p2->y),2));
    //calcula a distancia entre os pontos, realizando o calculo da raiz de (x1 - x2)^2 + (y1 - y2)^2
}
int verifica_ponto(PPonto p,CCirculo circulo)
{
    if(distancia(p,&circulo->c) < (circulo->raio))
    {
        return 1;
    }
    else
    {
        return 0;
    }
}