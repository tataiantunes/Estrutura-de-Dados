#include <stdio.h>

int main()
{
    float aa,bb,soma;
    printf("Digite dois numeros:\n");
    scanf("A: %f",&aa);
    scanf("B: %f",&bb);
    soma = (aa+bb);
    aa=soma;
    printf("A soma eh: %f. E A e B ficaram, respectivamente, %f e %f\n", soma,aa,bb);

    return 0;
}
