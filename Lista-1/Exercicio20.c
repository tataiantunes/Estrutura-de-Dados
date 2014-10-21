#include <stdio.h>

int main(void)
{
    int tam,i;
    printf("Digite o tamanho do vetor:\n");
    scanf("%i",&tam);
    int v[tam];
    printf("Digite os valores do vetor:\n");
    for(i = 0; i < tam; i++)
        scanf(" %i",&v[i]);
        
    int x;
    int *p = v;
    for(x=0; x<5; x++)
    {
        int n = p++;
        if (!(n % 2))
        printf("%i\n", n);
    }
}
