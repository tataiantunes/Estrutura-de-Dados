#include <stdio.h>

int main ()
{
    int *vetor;
    int tamanho = 5;
    vetor = malloc(tamanho*sizeof(int));

    int i;
    printf("Digite 5 numeros para o vetor:\n");
    for (i=0; i<tamanho; i++)
    {
        scanf("%i", &vetor[i]);
    }

    printf("O vetor eh: ");
    for (i=0; i<tamanho; i++)
    {
        printf("%i ", vetor[i]);
    }

    free(vetor);

    return 0;
}
