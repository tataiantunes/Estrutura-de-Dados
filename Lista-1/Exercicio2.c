#include <stdio.h>

int main (void){
    int a,b;
    printf("Digite dois valores:\n");
    scanf("%i\n%i", &a,&b);
    int maior(int x, int y);
    maior(a,b);

    return 0;
}

int maior(int x, int y ){
    if (x>y)
        printf("O %i eh maior que %i", x, y);
    else if (x==y)
        printf("O %i eh igual a %i", x, y);
    else
        printf("O %i eh maior que %i", y,x);

    return 0;
}
