#include <stdio.h>

int main (void)
{
    int n;
    int *numero;
    printf("Quantos inteiros voce vai digitar: ");
    scanf("%i", &n);

    numero = malloc(n*sizeof(int));

    int i;
    for (i=0; i < n; i++)
    {
        printf("Digite o numero do seu vetor: ");
        scanf("%i", &numero[i]);
    }

    int count1 = 0;
    int count2 = 0;
    for (i=0; i <n; i++)
    {
        if (numero[i] % 2 == 0)
        {
            printf("O numero %i eh par\n", numero[i]);
            count1++;
        }
        else
        {
            printf("O numero %i eh impar\n", numero[i]);
            count2++;
        }
    }

    printf("Tem %i numero(s) par e %i numero(s) impar", count1, count2);

    return 0;

}
