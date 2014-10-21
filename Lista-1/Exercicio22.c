#include <stdio.h>

int main(void)
{
  int v[5] = {1,2,3,4,5};
  int x = 4, *p;
  sub(v, x, &p);
  
  return 0;
  
}

void sub (int vector[], int y, int *pointer)
{
    for(pointer = vector ; pointer < vector + 5; pointer ++)
    {
        *pointer = y;
        printf("%i ",*pointer);
    }
}
