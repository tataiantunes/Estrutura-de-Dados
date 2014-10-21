#include<stdio.h>

int main(void)
{
  int *arm;
  int i,j,n;
  int matriz[2][4]
  
  arm =(int*)malloc(40*sizeof(int));
  
  for (n= 0; n < 5; n++)
  {
    for (i=0; i < 2; i++)
    {
      for (j=0; j < 4; j++)
      {
        printf("Matriz[%i][%i]: ",i+1,j+1);
        scanf("%i",&matriz[i][j]);
        *arm = matriz[i][j];
        arm++;
      }
    }
    
    printf("\n");
  }
  
  arm -= 40;
  
  return 0;

}
