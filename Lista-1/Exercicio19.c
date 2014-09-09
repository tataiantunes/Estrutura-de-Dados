#include <stdio.h>

int main(void)
{
    int v[5], i;
    int *point = v ;
    printf("Digite 5 numeros inteiros:\n");
    scanf("%i\n%i\n%i\n%i\n%i",&v[0],&v[1],&v[2],&v[3],&v[4]);
    for(i = 0; i < 5; i++){
        *(point + i) *= 2;
        printf("%i ", v[i]);
    }

    return 0;
}
