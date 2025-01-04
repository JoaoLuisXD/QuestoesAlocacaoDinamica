#include <stdio.h>
#include <stdlib.h>
struct vetor
{
    float altura;
    float largura;
    float profundidade;
};
typedef struct vetor Vetor;
float dot (Vetor *v1,Vetor *v2);
int main()
{   
    Vetor v1,v2;
    printf("DIGITE A ALTURA DO VETOR |v1|: ");
    scanf("%f%*c",&v1.altura);
    printf("DIGITE A LARGURA DO VETOR |v1|: ");
    scanf("%f%*c",&v1.largura);
    printf("DIGITE A PROFUNDIDADE DO VETOR |v1|: ");
    scanf("%f%*c",&v1.profundidade);
    printf("DIGITE A ALTURA DO VETOR |v2|: ");
    scanf("%f%*c",&v2.altura);
    printf("DIGITE A LARGURA DO VETOR |v2|: ");
    scanf("%f%*c",&v2.largura);
    printf("DIGITE A PROFUNDIDADE DO VETOR |v2|: ");
    scanf("%f%*c",&v2.profundidade);
    printf("O PRODUTO ESCALAR DOS VETORES E: %.2f",dot(&v1,&v2));
    return 0;
}
float dot (Vetor *v1,Vetor *v2)
{
    return (v1->altura * v2->altura) + (v1->largura * v2->largura) + (v1->profundidade * v2->profundidade);
}