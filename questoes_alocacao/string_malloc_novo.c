#include <stdio.h>
#include <stdlib.h>
int main()
{
    int tam;
    printf("DIGITE O TAMANHO DA STRING: ");
    scanf("%d",&tam);
    getchar();//sempre usar o scanf para scanear alguma coisa antes de um gets, usar getcha() ou fflush;
    char *palavra=(char *)malloc((tam+1) *sizeof(char));
    printf("DIGA A FRASE OU PALAVRA DESEJADA: ");
    gets(palavra);
    fflush(stdin);
    printf("%s",palavra);

    return 0;
}