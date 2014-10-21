#include<stdio.h>

int main(void)
{
  int *arm;
  int i,j,n, soma=0;
  int matriz[6][6];
  
  arm =(int*)malloc(36*sizeof(int));
  
  printf("Preencha a matriz:\n");
  for (i=0; i < 6; i++)
  {
    for (j=0; j < 6; j++)
    {
      printf("Matriz[%i][%i]: ",i+1,j+1);
      scanf("%i",&matriz[i][j]);
      *arm = matriz[i][j];
      arm++;
    }
  }
  printf("\n");
  
  arm -= 36;
  
  for(i = 0; i < 6;i++)
  {
    for(j = 0;j < 6;j++)
    {
      soma += matriz[i][j];
    }
    printf("A soma linha %i eh: %.2f\n",i+1,soma);
    soma = 0;
  }
  
  free(arm);
  
  return 0;

}
