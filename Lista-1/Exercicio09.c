#include <stdio.h>

int main()
{
  int tam1,tam2,x,*resultado;
  int somadevetores(int tam1, int tam2, int v1[], int v2[], int *v3);
  printf("Digite o tamanho do vetor 1:\n");
  scanf("%i",&tam1);
  int v1[tam1];
  printf("Digite os valores do vetor 1:\n");
  for(x = 0; x < tam1; x++)
    scanf("%i",&v1[x]);
  printf("Digite o tamanho do vetor 2: \n");
  scanf("%i",&tam2);
  int v2[tam2];
  printf("Digite os valores do vetor 2:\n");
  for(x = 0; x < tam2; x++)
    scanf("%i",&v2[x]);
  int v3[n];
  printf("A soma dos dois vetores eh:\n");
  somadevetores(tam1, tam2, v1, v2, &v3);
  for(x = 0; x < tam1; x++)
    printf("%i ",v3[x]);
    
}

int somadevetores(int n, int m, int *v1, int *v2, int *v3)
{
  int i;
  if(m == n)
  {
    for(i=0; i < n; i++)
      v3[i] = v1[i] + v2[i];
    return 0;
  }
  else
    return 1;
}
