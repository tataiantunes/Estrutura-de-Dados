#include <stdio.h>

int main(void)
{
    int vector[5] = {12,13,14,15,16}, *pointer = &vector,i;

    for(i = 0; i < 5; i++){
        pointer = &vector[i] + 1;
        printf("%p ", pointeir);
    }
  return 0;
}
