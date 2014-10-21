#include <stdio.h>

int main(void)
{
  int city, i, j;
  printf("Digite o numero de cidades: ");
  scanf("%i", &city);
  float mdist [city][city];
  
  for (i=0; i < city; i++)
  {
    for (j=0; j < city; j++)
    {
      if (i == j)
        mdist[i][j] = 0;
      else if (i > j)
        mdist[i][j] = mdist[j][i]; 
      else
      {
        pritnf("Digite a distancia entre a cidade %i e %i: ", i+1, j+1);
        scanf("%f", mdist[i][j]);
      }
    
    }
  
  }
  
  printf("A matriz de distancias eh:");
  
  for (i=0; i < city; i++)
  {
    for (j=0; j < city; j++)
    {
      printf("%.2f\n", mdist[i][j]);
    }
  }
  
  int citya = 0, cityb = 0;
  
  printf("Digite o numero de duas cidades que deseja ver a sua distancia: ");
  scanf("%i", &citya);
  scanf("%i", &cityb);
  printf("A distancia entre as cidades eh: %.2f\n", mdist[a-1][b-1]);
  
  return 0;

}
