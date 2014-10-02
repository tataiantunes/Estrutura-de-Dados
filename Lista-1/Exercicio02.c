#include <stdio.h>
// Sem ponteiros
#include <stdio.h>

int main (void)
{
    int a,b;
    printf("Digite dois valores:\n");
    scanf("%i\n%i", &a,&b);
    int maior(int x, int y);
    maior(a,b);

    return 0;
}

int maior(int x, int y )
{
    int aux;
    if (x>y)
        printf("O %i eh maior que %i", x, y);
    else if (x==y)
        printf("O %i eh igual a %i", x, y);
    else
        aux=x;
        x=y;
        y=aux;
        printf("O %i eh maior que %i", x,y);
        
    return 0;}

//Com ponteiros
#include <stdio.h>

int trocar(int *a,int *b){
    int aux;
    aux=*a;
    *a=*b;
    *b=aux;
    return 0;
}
int maior(int *a, int *b){
    if (*a>*b){
        printf("O maior eh %i e o segundo eh %i", *a,*b);}
    else if(*b>*a){
        trocar(a,b);
        printf("O maior eh %i e o segundo eh %i", *a,*b);}
    else if(*a==*b){
        printf("Os dois são iguais.");}
    }
    return 0;
}
int main(void)
{
    int a,b;
    printf("Digite dois valores:\n");
    scanf("%i\n%i", &a,&b);
    maior(&a,&b);
    return 0;
}
