#include <stdio.h>
#include <stdlib.h>

void verificar (int **matriz, int linha, int coluna, int valor);
{
  int i, j, verd;
  for (i=0; i < linha; i++)
  {
    for (j=0; j < coluna; j++)
    {
      if (matriz[i][j] == valor)
      {
        verd = 1;
      }
      else
      {
        verd = 0;
      }
    }
  }

  return (verd);
}

int main (void)
{
  int **matriz;
  int linha, coluna;
  int i,j;
  int valor;
  
  printf("Informe o numero de linhas da matriz: ");
  scanf("%i", &linha);
  printf("Informe o numero de colunas da matriz: ");
  scanf("%i", &coluna);
  
  matriz = (int*)malloc(coluna*sizeof(int));
  
  for(i = 0; i < linha; i++)
    matriz[i] = (int*)malloc(linha*sizeof(int));

  for(i = 0; i < linha; i++)
    {
      for(j = 0; j < coluna; j++)
      {
        printf("Digite a matriz[%i][%i]: ",i+1,j+1);
        scanf("%i", &matriz[i][j]);
      }
    }
  
  printf("Digite um valor para verificar se este esta na matriz");
  scanf("%i", &valor);
  
  verificar (matriz, linha, coluna, valor);
  
  free(matriz);
}
