/*
4) Escreva uma função mm que receba um vetor inteiro v[0..n1] e os endereços de duas variáveis inteiras, digamos min e max, e 
deposite nessas variáveis o valor de um elemento mínimo e o valor de um elemento máximo do vetor.
Escreva também uma função main que use a função mm.
*/

#include <stdio.h>

int main(void)
{
  int a, i, minimo, maximo;
  
  void mm(int *v, int a, int *minimo, int *maximo);
  
  printf("Digite quantos elementos tera seu vetor:\n");
  scanf("%i",&a);
  
  printf("Digite o valor dos seus elementos:\n");
  for (i=0; i<a; i++)
    {
      scanf("%i", &v[i]);
    }
    
  mm(v, a, &maximo, &minimo);
  
  printf("O minimo eh: %i\n", minimo);
  
  printf("O maximo eh: %i\n", maximo);
  
  return 0;

}

void mm(int *v, int a, int *minimo, int *maximo);
{
    int i, j, aux;
    for(i=0; i < a; ++i)
    {
        for(j= i + 1; j < a; ++j)
        {
            if(v[i] > v[j])
            {
                aux = v[i];
                v[i] = v[j];
                v[j] = aux;
            }
        }
    }
    *maximo = v[a-1];
    *minimo = v[0];

}
