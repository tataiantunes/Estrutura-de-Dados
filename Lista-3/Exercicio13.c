#include <stdio.h>
#include <stdio.lib>

typedef struct
{
  char nomeproduto[30];
  int codigoproduto;
  float preco;
} registro;

int main(void)
{
  int *vector;
  
  vector = malloc(1024);

  free(vector);

  int i;
  int **matriz;

  matriz = (int**)malloc(10*sizeof(int*));
  for (i = 0; i < 10; i++)
  {
    matriz[i] = (int*)malloc(10*sizeof(int));
  }
  
  free(matriz);

  registro *reg;
  reg = (registro*)malloc(50*sizeof(registro));

  free(reg);

  int linhas;
  
  printf("Quantas linhas de 1 a 100: ");
  scanf("%i",&linhas);
  
  if (linhas > 100 || linhas < 0)
  {
    printf("Valor invalido, digite novamente: ");
    scanf("%i", %linhas);
  }
  else
  {
    text = (char**)malloc(linhas*sizeof(char));
    for(i=0;i<linhas;i++)
      text[i]=(char*)malloc(80*sizeof(char));
  }
 
  free(text);

  return 0;
  
}
