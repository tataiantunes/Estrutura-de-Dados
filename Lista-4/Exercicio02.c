#include <stdio.h>

typedef struct
{
	int rgm;
	char curso[30];
	int semestre;
	int anoinicio;

} aluno;

int main (void)
{
	aluno *adm;
  adm = (aluno*)malloc(40*sizeof(aluno));
	aluno *eng;
	eng = (aluno*)malloc(40*sizeof(aluno));
	aluno *med;
	med = (aluno*)malloc(40*sizeof(aluno));

	int qtd, i;
	printf("\nCadastro para os alunos do curso de Administracao \n");
	printf("Informe quantos alunos voce deseja cadastrar: ");
	scanf("%i", &qtd);
	for (i=0; i < qtd; i++)
	{
		printf("Curso: ");
		scanf("%s",&(adm[i]).curso);
		printf("RGM: ");
		scanf("%i",&(adm[i]).rgm);
		printf("Ano de inicio: ");
		scanf("%i",&(adm[i]).anoinicio);
		printf("Semestre: ");
		scanf("%i",&(adm[i]).semestre);
	}

	printf("\nCadastro para os alunos do curso de Medicina \n");
	printf("Informe quantos alunos voce deseja cadastrar: ");
	scanf("%i", &qtd);
	for (i=0; i<qtd; i++)
	{
		printf("Curso: ");
		scanf("%s",&(med[i]).curso);
		printf("RGM: ");
		scanf("%i",&(med[i]).rgm);
		printf("Ano de inicio: ");
		scanf("%i",&(med[i]).anoinicio);
		printf("Semestre: ");
		scanf("%i", &(med[i]).semestre);
	}

	printf("\nCadastro para os alunos do curso de Engenharia \n");
  printf("Informe quantos alunos voce deseja cadastrar: ");
	scanf("%i", &qtd);
	for (i=0; i<qtd; i++)
	{
		printf("Curso: ");
		scanf("%s",&(eng[i]).curso);
		printf("RGM: ");
		scanf("%i",&(eng[i]).rgm);
		printf("Ano de inicio: ");
		scanf("%i",&(eng[i]).anoinicio);
		printf("Semestre: ");
		scanf("%i",&(eng[i]).semestre);

	}

	free(adm);
	free(eng);
	free(med);

	return 0;
	
}
