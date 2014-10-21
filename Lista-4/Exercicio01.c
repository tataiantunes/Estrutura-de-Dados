#include<stdio.h>

typedef struct
{
	char nome[40];
	float qthoras;
	float salh;
	char depto[3];
	int matric;
	int saltotal;
} func;

int main (void)
{
    int msaldo=0;
    int aux=0;
    int soma = 0;
	func *reg;
	reg = (func*)malloc(50*sizeof(func));

	int qtd, i;
	printf("Digite a quantidade de funcionarios que serao cadastrados de 0 a 50: ");
	scanf("%i",&qtd);
	if (qtd > 50 || qtd < 0)
	{
		printf("O valor digitado eh invalido, digite novamente: ");
		scanf("%i", &qtd);
	}
	else
	{
		for(i=0; i<qtd; i++)
		{
		printf("\nMatricula: ");
		scanf("%i", &(reg[i]).matric);
			if ((reg[i]).matric == 0)
			{
				printf("O funcionario nao existe!");
				((reg[i]).nome)== NULL;
				((reg[i]).matric) = 0;
				((reg[i]).qthoras) = 0;
				((reg[i]).salh) = 0;
				((reg[i]).depto) == NULL ;
            }
			else
			{
				printf("Realize o cadastro abaixo:\n");
				printf("Nome: ");
				scanf("%s", &(reg[i]).nome);
				printf("Quantidade de horas: ");
				scanf("%f", &(reg[i]).qthoras);
				printf("Salario/hora: ");
				scanf("%f", &(reg[i]).salh);
				if (((reg[i]).salh) > msaldo)
                {
                    msaldo=((reg[i]).salh);
                    aux=i;

                }
				printf("Departamento: ");
				scanf("%s", &(reg[i]).depto);

				soma += ((reg[i]).salh);

			}
			((reg[i]).saltotal) = soma;
		}

	}

	printf("\nO funcionario cadastrado:\n");
	for (i=0; i<qtd; i++)
	{
		printf("Nome: %s\n", (reg[i]).nome);
		printf("Matricula: %i\n", (reg[i]).matric);
		printf("Departamento: %s\n", (reg[i]).depto);
        printf("Quantidade de horas: %.2f\n", (reg[i]).qthoras);
		printf("Salario/hora: %.2f\n", (reg[i]).salh);
	}

    printf("\nO funcionario com maior salario cadastrado eh:\n");
    printf("Nome: %s\n", (reg[aux]).nome);
    printf("Matricula: %i\n", (reg[aux]).matric);
    printf("Departamento: %s\n", (reg[aux]).depto);
    printf("Quantidade de horas: %.2f\n", (reg[aux]).qthoras);
    printf("Salario/hora: %.2f\n", (reg[aux]).salh);

	return 0;

}
