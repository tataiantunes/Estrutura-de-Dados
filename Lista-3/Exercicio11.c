#include <stdio.h>

int main(void)
{
  int **matriz;
  int linha, coluna;
  
  printf("Digite o numero de linhas da matriz: ");
  scanf("%i", &linha);
  printf("Digite o numero de colunas da matriz: ");
  scanf("%i", &coluna);
  
  matriz = (int**)malloc(linha*sizeof(int*));

  int i,j;
  
  for (i = 0; i < linha; i++)
  {
    matriz[i] = (int*) malloc(coluna*sizeof(int));
    for (j = 0; j < colunas; j++)
      matriz[i][j] = 0;
  }

  for(i = 0; i < linha; i++)
  {
    for(j = 0; j < colunas; j++)
    {
      matriz[i][j] = rand() % 100;
    }
  }
  
  printf("\nMatriz:\n\n");
  
  for(i = 0; i < linha; i++) 
  {
    for(j = 0; j < coluna; j++)
    {
      printf("%i ",matriz[i][j]);
    }
  }

  printf("\nOs tres maiores elementos da matriz:\n");

  free(matriz);

  return 0;
  
}
