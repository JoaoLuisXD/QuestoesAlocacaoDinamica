#include <stdio.h>
#include <stdlib.h>
struct ponto
{
    float x;
    float y;
};
typedef struct ponto Ponto;
int dentroRet(Ponto *v1,Ponto *v2,Ponto *p);
int main()
{
    Ponto VIE,VSD,ponto_p;
    printf("DIGITE O VALOR DOS VERTICES ABAIXO\n");
    printf("VERTICE INFERIOR ESQUERDO\n");
    printf("X: ");
    scanf("%f%*c",&VIE.x);
    printf("Y: ");
    scanf("%f%*c",&VIE.y);
    printf("VERTICE SUPERIOR DIREITO\n");
    printf("X: ");
    scanf("%f%*c",&VSD.x);
    printf("Y: ");
    scanf("%f%*c",&VSD.y);
    printf("AGORA DIGITE UM PONTO QUE DESEJA VERIFICAR DENTRO DO RETANGULO\n");
    printf("X: ");
    scanf("%f%*c",&ponto_p.x);
    printf("Y: ");
    scanf("%f%*c",&ponto_p.y);
    dentroRet(&VIE,&VSD,&ponto_p);
    if(dentroRet(&VIE,&VSD,&ponto_p))
    {
        printf("O PONTO ESTA DENTRO DO RETANGULO");
    }
    else printf("O PONTO NAO ESTA DENTRO DO RETANGULO");
    return 0;
}
int dentroRet(Ponto *v1,Ponto *v2,Ponto *p)
{
    if(p->x > v1->x && p->y > v1->y && p->x < v2->x && p->y < v2->y)
    {
        return 1;
    }   
    else return 0;
}