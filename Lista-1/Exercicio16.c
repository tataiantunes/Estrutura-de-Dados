#include <stdio.h>

int main(void)
{
  int a,b;
  printf("Digite dois numeros inteiros:");
  scanf("%i\n%i", &a,&b);
  
  if (&a>&b)
    printf("O primeiro endereco %p eh maior que o segundo %p", &a,&b);
  else 
    printf("O segundo endereco %p eh maior que o primeiro %p", &b,&a);
  
  return 0;
}
