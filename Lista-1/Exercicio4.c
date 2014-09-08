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

