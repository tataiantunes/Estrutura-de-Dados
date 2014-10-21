#include<stdio.h>

int main(void)
{
  int *arm, *p;
  int i,j,n, soma=0;
  int matriz[2][2];
  
  arm =(int*)malloc(5*sizeof(int));
  
  for (n= 0; n < 5; n++)
  {
    printf("Digite os valores para a matriz");
    for (i=0; i < 2; i++)
    {
      for (j=0; j < 2; j++)
      {
        printf("Matriz[%i][%i]: ",i+1,j+1);
        scanf("%i",p);
        soma += *p;
      }
    }
    *arm = soma;
    arm++;
    printf("\n");
    
  }
  
  arm -= 5;
  
  for (i=0; i < 5; i++)
    {
      printf("%i", *arm);
      arm++;
    }
  
  free(arm);
  
  return 0;

}
