#include <stdio.h>

int main (void)
{
    float nota1, nota2, mediasimples1, mediaponderada1;
    printf("Digite sua primeira nota:\n");
    scanf("%f", &nota1);
    printf("Digite sua segunda nota:\n");
    scanf("%f", &nota2);
    printf("Sua primeira nota foi %.2f e a sua segunda nota foi %.2f\n", nota1, nota2);

    float mediasimples(float a, float b);
    mediasimples1 = mediasimples(nota1,nota2);

    float mediaponderada(float a, float b);
    mediaponderada1 = mediaponderada(nota1,nota2);

    float dados(float a, float b, float mediasimples, float mediaponderada);
    dados(nota1, nota2, mediasimples1, mediaponderada1);

    return 0;
}

float mediasimples(float a, float b){
    float mediasimples = ((a + b)/2);
    printf("A media simple foi %.2f\n", mediasimples);

    return (mediasimples);
}

float mediaponderada(float a, float b){
    float mediaponderada = ((a + (b*2))/3);
    printf("A  media ponderada foi %.2f\n", mediaponderada);

    return (mediaponderada);
}

float dados(float a, float b, float mediasimples, float mediaponderada){
    printf("As suas notas foram: %.2f e %.2f. E a sua media simples foi %.2f e a ponderada foi %.2f",a,b,mediasimples,mediaponderada);

    return 0;
}

// 

#include <stdio.h>

int main (void)
{
    float nota1, nota2,mediasimples, mediaponderada;
    printf("Digite sua primeira nota:\n");
    scanf("%f", &nota1);
    printf("Digite sua segunda nota:\n");
    scanf("%f", &nota2);

    if (nota1<=10 && nota1>0)
    {
        if (nota2<=10 && nota2>0){
            float calc_med(float a, float b);
            calc_med(nota1,nota2);
            float le_dados(float a, float b, float mediasimples, float mediaponderada);
            le_dados(nota1, nota2, mediasimples, mediaponderada);
            }
        else{
            printf("Nota 2 invalida");
            }
    }
    else{
        printf("Nota 1 invalida");
        }

    return 0;
}

float calc_med(float a, float b){
    float mediasimples = ((a + b)/2);
    float mediaponderada = ((a + (b*2))/3);

    return (mediasimples,mediaponderada);
}


float le_dados(float a, float b, float mediasimples, float mediaponderada){
    float calc_med(float a, float b);
    calc_med(nota1,nota2);
    printf("As suas notas foram: %.2f e %.2f. E a sua media simples foi %.2f e a ponderada foi %.2f",a,b,mediasimples,mediaponderada);

    return 0;
}
