#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
  char *string;
  int tam;
  
  printf("Digite o tamanho da palavra de até 100 caracteres, sem acentos: ");
  scanf("%i", &tam);
  
  string = (char*)malloc(100);
  
  while (tam > 100 || tam < 0)
  {
    printf("Valor invalido, digite novamente: ");
    scanf("%i", &tam);
  }

  fflush(stdin);
  printf("Digite a string: ");
  gets(string);
  
  int ca,ce,ci,co,cu,i;

  while (string[i] != '\o')
  {
    if (string[i] == 'a')
    {
      ca++;
    }
    else if (string[i] == 'e')
    {
      ce++;
    }
    else if (string[i] == 'i')
    {
      ci++;
    }
    else if (string[i] == 'o')
    {
      co++;
    }
    else if (string[i] == 'u')
    {
      cu++;
    }
    i++;
  }

  printf("\nA quantidade de A(s) na palavra eh %i", ca);
  printf("A quantidade de E(s) na palavra eh %i", ce);
  printf("A quantidade de I(s) na palavra eh %i", ci);
  printf("A quantidade de O(s) na palavra eh %i", co);
  printf("A quantidade de U(s) na palavra eh %i", cu);

  free(string);

  return (0);
}


  return 0;
  
}
