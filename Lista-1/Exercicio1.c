#include <stdio.h>

int main(void)
{
    int a,b;
    printf("Digite dois valores inteiros:\n");
    scanf("%i\n%i", &a, &b);
    int trocar(int x, int y);
    trocar(a,b);

    return 0;
}

int trocar(int x, int y)
{
    int z =0,w =0;
    z=x;
    w=y;
    y=z;
    x=w;
    printf("Invertendo, temos o primeiro numero %i e o segundo %i", x,y);

    return 0 ;
}
