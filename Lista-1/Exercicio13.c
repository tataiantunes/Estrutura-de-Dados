#include <stdio.h>

int main (void)
{
  int a = 1, *pA=&a;
  float b = 2.2, *pB=&b;
  char c = 'A', *pC=&c;
  
  printf("Antes de modificar temos: %i ; %.2f e %c", a,b,c);
  *pA = 2;
  *pB = 3.3;
  *pC = 'B';
  printf("Depois de modificar temos: %i ; %.2f e %c", a,b,c);
  
  return 0;
}
