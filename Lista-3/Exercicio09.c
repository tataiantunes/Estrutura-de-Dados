#include <stdio.h>
#include <stdio.lib>

int main(void)
{
  float **matriz;
  int linha, coluna;
  int i,j;
  
  printf("Digite o numero de linhas da matriz: ");
  scanf("%i", &linha);
  printf("Digite o numero de colunas da matriz: ");
  scanf("%i", &coluna);
  
  matriz = (float**)malloc(coluna*sizeof(float*));

  for (i=0; i < linha; i++)
  {
    matriz[i] = (float*)malloc(linha*sizeof(float));
  }
  
  for (i=0; i < linha; i++)
  {
    for (j=0; j < coluna; j++)
    {
      printf("Digite o valor da matriz[%i][%i]", i+1, j+1);
      scanf("%f", &matriz[i][j]);
    }
  }
  
  printf("A matriz completa e organizada eh:\n");
  
  for (i=0; i < linha; i++)
  {
    for (j=0; j < coluna; j++)
    {
      printf("%.2f", matriz[i][j]);
    }
  }

  return 0;
}
