#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    char nome[20];
    int matricula;
    char sobrenome[20];
    int anodenascimento;
}reg;

int main (void)
{
    int qtdalunos;
    printf("Quantos alunos serao cadastrados: ");
    scanf(" %i", &qtdalunos);

    reg *r;

    r = (reg*)malloc(sizeof(reg));

    int i;
    for (i=0; i < qtdalunos; i++)
    {
        printf("Digite o nome do aluno: ");
        scanf(" %s", &r->nome);
        printf("Digite o sobrenome do aluno: ");
        scanf(" %s", &r->sobrenome);
        printf("Digite a matricula do aluno: ");
        scanf(" %i", &r->matricula);
        printf("Digite o ano de nascimento do aluno: ");
        scanf(" %i", &r->anodenascimento);
        r = r + 1;

    }

    r = r - qtdalunos;

    for (i=0; i<qtdalunos; i++)
    {
        printf("O cadastro %i eh:\n", i+1);
        printf("Nome: %s\n", (r[i]).nome);
        printf("Sobrenome: %s\n", (r[i]).sobrenome);
        printf("Matricula: %i\n", (r[i]).matricula);
        printf("Ano de nascimento: %i\n", (r[i]).anodenascimento);
        printf("\n");
    }

    free (r);

    return 0;

}
