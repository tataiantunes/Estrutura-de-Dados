// Basico

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
    int aux;
    aux=x;
    x=y;
    y=aux;
    printf("Invertendo, temos o primeiro numero %i e o segundo %i", x,y);

    return 0 ;
}

//Usando Ponteiros

#include <stdio.h>

int trocar(int *a,int *b){
    int aux;
    aux=*a;
    *a=*b;
    *b=aux;
    return 0;
}

int main(void){
    int a,b;
    printf("Digite dois numeros, A e B:\n");
    scanf("%d\n%d", &a, &b);
    printf("Os valores de A e B eram, respectivamente: %d e %d\n", a,b);
    trocar(&a,&b);
    printf("Agora, os valores de A e B são: %d e %d\n", a,b);
    return 0;
}

