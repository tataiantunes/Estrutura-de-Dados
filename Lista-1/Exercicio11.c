#include <stdio.h>
int main()
{
    int a,i,maior;
    void omaior(int *v, int a, int *maior);
    printf("Digite o numero de elementos de seu vetor de inteiros:\n");
    scanf("%i",&a);
    int v[a];
    printf("Digite o valor dos seus elementos:\n");
    for(i = 0; i < a; i++)
        {
            scanf(" %i",&v[i]);
        }
    omaior(v, a, &maior);
    printf("O maior eh: %i\n", maior);
    return 0;
}

void omaior(int *v, int a, int *maior)
{
    int i, j, aux;
    for(i=0; i < a; ++i)
        {
            for(j= i + 1; j < a; ++j)
                {
                    if(v[i] > v[j])
                        {
                            temporaria = v[i];
                            v[i] = v[j];
                            v[j] = aux;
                        }
                }
        }
    *maior = v[a-1];
}
