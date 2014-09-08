#include <stdio.h>

int main (void)
{
    int a,b;
    printf("Digite dois valores, A e B:\n");
    scanf("%i\n%i", &a,&b);

    a = 2*a;
    b = 2*b;

    printf("O dobro de A eh: %i e B eh %i", a,b);

    return 0;

}

