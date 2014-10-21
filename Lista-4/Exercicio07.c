#include<stdio.h>
#include<string.h>

typedef struct
{
	char filial[3];
	int qtdefunc;
	float farturtot;
} func;

int main (void)
{
    int fi;
    float rpc[3];

    func *sp1;
    sp1= (func*)malloc(20*sizeof(func));
    func *rj1;
    rj1= (func*)malloc(20*sizeof(func));
    func *bh1;
    bh1= (func*)malloc(20*sizeof(func));

    printf("Qual filial sera realizado os cadastros? RJ = 1, BH = 2 ou SP = 3? ");
    scanf("%i",&fi);

    if (fi == 1)
    {
        printf("RJ\n");
        printf("Filial: ");
        scanf("%s",&rj1->filial);
        printf("Quantidade de funcionarios: ");
        scanf("%i", &rj1->qtdefunc);
        if ((rj1->qtdefunc)>20||(rj1->qtdefunc)<0)
        {
            printf("Voce digitou um valor invalido. Digite uma quantidade entre 0 e 20.\n");
            scanf("%i", &rj1->qtdefunc);
        }
        printf("Faturamento total: ");
        scanf("%i", &rj1->farturtot);
        rpc[0] = rj1->farturtot/rj1->qtdefunc;
    }

    else if (fi == 2)
    {
        printf("BH\n");
        printf("Filial: ");
        scanf("%s",&bh1->filial);
        printf("Quantidade de funcionarios: ");
        scanf("%i", &bh1->qtdefunc);
        if ((bh1->qtdefunc)>20||(bh1->qtdefunc)<0)
        {
            printf("Voce digitou um valor invalido. Digite uma quantidade entre 0 e 20.\n");
            scanf("%i", &bh1->qtdefunc);
        }
        printf("Faturamento total: ");
        scanf("%i", &bh1->farturtot);
        rpc[1] = bh1->farturtot/bh1->qtdefunc;
    }


    else if (fi == 3)
    {
        printf("SP\n");
        printf("Filial: ");
        scanf("%s",&sp1->filial);
        printf("Quantidade de funcionarios: ");
        scanf("%i", &sp1->qtdefunc);
        if ((sp1->qtdefunc)>20||(sp1->qtdefunc)<0)
        {
            printf("Voce digitou um valor invalido. Digite uma quantidade entre 0 e 20.\n");
            scanf("%i", &sp1->qtdefunc);
        }
        printf("Faturamento total: ");
        scanf("%i", &sp1->farturtot);
        rpc[2] = sp1->farturtot/sp1->qtdefunc;
    }

    printf("A renda per capita de RJ  eh: %.2f\n",percapita[0]);
    printf("A renda per capita de BH  eh: %.2f\n",percapita[1]);
    printf("A renda per capita de SP  eh: %.2f\n",percapita[2]);
  

    free(sp1,rj1,bh1);
    
    return 0;
    
}
