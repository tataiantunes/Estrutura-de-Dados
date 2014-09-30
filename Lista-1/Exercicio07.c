#include<stdio.h>

int main (void)
{
  float num, *frac;
  int inteiro;
  int funfrac(float num, int *inteiro, float *frac);
  printf("Digite um numero:\n");
  scanf("%f\n", &num);
  funfrac(num, &inteiro, &frac);
  printf("A parte inteira eh: %i\n", inteiro);
  printf("A parte fracionaria eh: %.4f", frac);

  return (0);
}

int funfrac(float num, int *inteiro, float *frac)
{
  *inteiro = (int)num;
  *frac = num - *inteiro;

  return (0);
}
