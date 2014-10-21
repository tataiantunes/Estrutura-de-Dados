#include <stdio.h>

int main(void)
{
  int v[5] = {5,6,7,8,32};
  int *p;
  print(v, &p);
    
  return 0;

}

int print(int vector[], int *p)
{
  for(ptr = vector; p < vetor + 5; p++)
    printf("%i ",*p);

}
