#include <stdio.h>

int main(void)
{
  int n;
  int x;
  int count;
  
  printf("Digite o tamanho do seu vetor: ");
  scanf("%i", &n);
  
  int v[n];
  
  printf("Qual o valor para ser encontrado os multiplus? ");
  scanf("%i", &x);
  
  printf("Gerando um vetor aleatorio...\n");
  
  for (i=0; i < n; i++)
  {
    v[i] = rand() % 100;
    printf("%i", v[i]);
  }
  
  for (i=0; i < n; i++)
  {
    if (v[i] % x == 0 )
    {
      printf("Temos que %i eh multiplo de %i", v[i], x);
      count++;
    }
  }
  
  printf("Foram encontrados %i multiplus de %i", count, x);
  
  return 0;
  
}
