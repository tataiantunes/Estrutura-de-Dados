#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    char *filial;
    int qtdefunc;
    float faturtot;
} registro;

int main(void)
{
  registro *reg;
  reg =(registro*)malloc(3*sizeof(registro));

  float rpc[3];

  reg->filial = "RJ1";
  printf("\nCadastro para a filial RJ\n");
  printf("Quantidade de funcionarios entre 0 e 20: ");
  scanf("%i",&reg->qtdefunc);
  if ((reg->qtdefunc)<0 || (reg->qtdefunc)>20)
  {
    printf("Valor digitado invalido, digite novamente: ");
    scanf("%i",&reg->qtdefunc);
  }
  printf("Faturamento total: ");
  scanf("%f",&reg->faturtot);
  rpc[0] = (reg->faturtot)/(reg->qtdefunc);
  reg++;

  reg->filial = "BH1";
  printf("\nCadastro para a filial BH\n");
  printf("Qual a quantidade de funcionarios entre 0 e 20: ");
  scanf("%i",&reg->qtdefunc);
  if ((reg->qtdefunc)<0 || (reg->qtdefunc)>20)
  {
    printf("Valor digitado invalido, digite novamente: ");
    scanf("%i",&reg->qtdefunc);
  }
  printf("Faturamento total: ");
  scanf("%f",&reg->faturtot);
  rpc[1] = (reg->faturtot)/(reg->qtdefunc);
  reg++;

  reg->filial = "SP1";
  printf("\nCadastro para a filial SP\n");
  printf("Quantidade de funcionarios entre 0 e 20: ");
  scanf("%i",&reg->qtdefunc);
  if ((reg->qtdefunc)<0 || (reg->qtdefunc)>20)
  {
    printf("Valor digitado invalido, digite novamente: ");
    scanf("%i",&reg->qtdefunc);
  }
  printf("Faturamento total: ");
  scanf("%f",&reg->faturtot);
  rpc[2] = (reg->faturtot)/(reg->qtdefunc);
  reg++;

  reg -= 3;

  int i, j;
  char *aux2;
  float aux1;
  
  for(i = 0; i < 3; i++)
  {
    for(j = i+ 1; j < 3;j++)
    {
      if(rpc[i] > rpc[j])
      {
        aux1 = rpc[i];
        rpc[i] = rpc[j];
        rpc[j] = aux1;
        aux2 = reg[i].filial;
        reg[i].filial = reg[j].filial;
        reg[j].filial = aux2;
      }
    }
  }

  for(i = 0; i < 3; i++)
    printf("A renda per capita de %s eh: %.2f\n",reg[i].filial,rpc[i]);

  free(reg);
  
  return 0;

}
