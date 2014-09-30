#include <stdio.h>
int main()
{
    int a,i,maior,menor;
    void maiormenor(int *v, int a, int *maior, int *menor);
    printf("Digite o numero de elementos de seu vetor de inteiros:\n");
    scanf("%i",&a);
    int v[a];
    printf("Digite o valor de cada elemento, separando por espaco:\n");
    for(i = 0; i < a; i++)
        {
            scanf(" %i",&v[i]);
        }
    maiormenor(v, a, &maior, &menor);
    printf("O menor eh: %i\n", menor);
    printf("O maior eh: %i\n", maior);
    return 0;
}
void maiormenor(int *v, int a, int *maior, int *menor)
{
    int x;
    if (a > 0)
    {
        *maior = v[0];
        *menor = v[0];
        for(x = 1; x < a; x++ )
        {
            if(v[x] > v[0])
            {
                *maior = v[x];
            }
            if(v[x] < v[0])
            {
                *menor = v[x];
            }
        }
    }
}
