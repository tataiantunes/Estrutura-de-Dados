/*
8)Escreva uma função que recebe como parâmetros um vetor de inteiros v, o número de elementos dele N e ponteiros para 
variáveis nas quais devem ser armazenados os valores maximo e minimo do vetor. Sua assinatura deve ser:
void maximoMinimo(int *v, int N, int *maximo, int *minimo);
*/

#include <stdio.h>

int main (void)
{

  return ();
}

void maximoMinimo(int *v, int N, int *maximo, int *minimo)
{
    int i, j,temporaria;
    for(i=0; i < N; ++i)
    {
        for(j= i + 1; j < N; ++j)
        {
            if(v[i] > v[j])
            {
                temporaria = v[i];
                v[i] = v[j];
                v[j] = temporaria;
            }
        }
    }
    *maximo = v[N-1];
    *minimo = v[0];

}
