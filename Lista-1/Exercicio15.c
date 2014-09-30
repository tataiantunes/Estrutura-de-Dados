#include <stdio.h>

int main(void)
{
  int a,b;
  a = 10;
  b = 20;
  
  if (&a>&b)
    printf("O maior endereco eh %p", &a);
  else 
    printf("O maior endereco eh %p", &b);
  
  return 0;
}
