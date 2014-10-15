#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int tamanho;
    printf("Digite o tamanho do seu vetor: ");
    scanf("%i",&tamanho);

    int *vetor;
    vetor = malloc(tamanho*sizeof(int));

    int i;
    for (i=0; i < tamanho; i++)
    {
        printf("Digite o numero do seu vetor: ");
        scanf("%i", &vetor[i]);
    }

    printf("O vetor eh: ");
    int j;
    for (j=0;j< tamanho; j++)
    {
        printf("%i ", vetor[j]);
    }


    return 0;
}
