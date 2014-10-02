#include <stdio.h>

int main(void)
{
    float mtrx[3][3] = {{1.1,2.2,3.3},{4.4,5.5,6.6},{7.7,8.8,9.9}};
    int i,j;
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            printf("O endereco da matriz[%i][%i] eh: %i \n",i+1,j+1,&mtrx[i][j]);
        }
    }
    
    return 0;
}
