#include <stdio.h>
#include <math.h>

int main(void)
{
    int resultados (float a, float b, float c, float *x1, float *x2);
    int raiz;
    float a,b,c,x1,x2;
    
    printf("Digite os valores de a, b e c:\n");
    scanf("%f\n %f\n %f\n", &a,&b,&c);
    
    raiz = resultados(a,b,c,&x1,&x2);
    
    printf("O numero de raizes reais e distintas eh: %i\n",raiz);
    
    if(raiz == duasraizesreais){
        printf("As raizes reais e distintas sao: %.2f e %.2f",x1,x2);}
    else if(raiz == raizesiguais){
        printf("As raizes sao identicas: %.2f",x1);}
        
    return 0;
}

int resultados (float a, float b, float c, float *x1, float *x2)
{
    if(a > 0)
    {
        double delta = (b*b) - (4*a*c);
        if(delta > 0)
        {
            *x1 = (-b + sqrt(delta))/(2*a);
            *x2 = (-b - sqrt(delta))/(2*a);
            return (duasraizesreais);
        }
        else if(delta == 0)
        {
            *x1 = (-b)/(2*a);
            return (raizesiguais);
        }
        else
        {
            return 0;
        }
    }
}
