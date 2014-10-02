#include <stdio.h>

int main(void)
{
  int a, i, maximo;
  
  void mm(int *v, int a, int *maximo);
  
  printf("Digite quantos elementos tera seu vetor:\n");
  scanf("%i",&a);
  
  printf("Digite o valor dos seus elementos:\n");
  for (i=0; i<a; i++)
    {
      scanf("%i", &v[i]);
    }
    
  mm(v, a, &maximo, &ocorre);
  
  printf("O maximo eh: %i\n", maximo);
  
  printf("O maximo ocorre: %i\n", ocorre);
  
  return 0;
}

void mm(int *v, int a, int *maximo, int *ocorre);
{
    ocorre = 0;
    int i, j, aux;
    for(i=0; i < a; i++)
    {
        for(j= i + 1; j < a; j++)
        {
            if(v[i] > v[j])
            {
                aux = v[i];
                v[i] = v[j];
                v[j] = aux;
            }
        }
    }
    *maximo = v[a-1];
    
    for (i=0; i < a; i++)
    {
        if (v[i] == *maximo)
          *ocorre++;
      
    }
  

}






  
