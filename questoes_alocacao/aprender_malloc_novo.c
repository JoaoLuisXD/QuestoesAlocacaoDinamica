#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *ponteiro;
    ponteiro = (int *)malloc(sizeof(int));
    *ponteiro = 1000;
    if(ponteiro == NULL)
    {
        printf("MEMORIA INSUFICIENTE");
    }
    printf("%d",*ponteiro);
    free(ponteiro);
    return 0;
}