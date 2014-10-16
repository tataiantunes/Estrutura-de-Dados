#include <stdio.h>
#include <stdlib.h>

int main (void)
{
    int numero = 1;
    int *vector[30];
    int i = 0;
    int aux = 0;

    while (numero > 0)
    {
        printf("Insira um numero: ");
        scanf("%i",&numero);
        vector[i] = numero;
        i++;
        aux ++;

    }

    printf("\nO vetor eh:\n");
    for (i=0; i<aux ; i++)
    {
        printf("%i ", vector[i]);
    }

    return 0;

}
