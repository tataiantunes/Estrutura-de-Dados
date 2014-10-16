#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    int tam;
    int i=0;
    char *string;
    printf("Digite o tamanho da string: ");
    scanf("%i", &tam);

    string = (char*)malloc(sizeof(char));

    fflush(stdin);
    printf("Digite uma string utilizando letra minuscula: ");
    gets(string);

    while (string[i] != '\o')
    {
        if (string[i] == 'a')
        {
            string[i] = ' ';
            i++;
        }
        else if (string[i] == 'e')
        {
            string[i] = ' ';
            i++;
        }
        else if (string[i] == 'i')
        {
            string[i] = ' ';
            i++;
        }
        else if (string[i] == 'o')
        {
            string[i] = ' ';
            i++;
        }
        else if (string[i] == 'u')
        {
            string[i] = ' ';
            i++;
        }
        else
        {
            i++;
        }
    }

    printf("A string sem as vogais eh: ");
    for (i=0; i<tam; i++)
    {
        printf("%c", string[i]);
    }

    free(string);

    return (0);
}
