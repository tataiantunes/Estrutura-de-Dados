#include <stdio.h>

int main(void)
{
    int i,lista[3];

    printf("Digite tres valores:\n");
    for(i=0; i<3; i++){
        scanf("%i", &lista[i]);
    }

    if (lista[0]==lista[1]==lista[2])
        printf("Como os numero sao iguais: 1\n");
    else
        printf("Como os numeros sao diferentes: 0\n");

    void ordenar(int lista[],int comp);
    ordenar(lista, 3);
    printf("A ordem crescente eh: %i %i %i", lista[0],lista[1],lista[2]);

    return 0;
}

void ordenar(int lista[], int comp)
{
    int i,j,org;
    for (i=0; i< comp ;i++){
        for (j=i+1; j<comp; j++){
            if (lista[i] > lista[j]){
                org = lista[i];
                lista[i] = lista[j];
                lista[j] = org;
            }
        }
    }

    return 0;
}
