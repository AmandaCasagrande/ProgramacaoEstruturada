#include <stdio.h>
#include <stdlib.h>

/*
14. Construa um programa que leia o número de linhas e de colunas de uma matriz de números reais, aloque espaço dinamicamente para esta e a inicialize com valores fornecidos pelo usuário. Ao final, o programa devera retornar a matriz na saída padrão com layout apropriado.
*/
int main (void) {
  int i, j;
  float *matriz;

  printf ("\nEntre com o numero de linhas da matriz: ");
  scanf("%d",&i);
  printf ("\nEntre com o numero de colunas da matriz: ");
  scanf("%d",&j);

  matriz=(float*)malloc (i*j*sizeof(float));

  for (int cont = 0; cont < i*j; cont++) {
    printf("\nEntre com o elemento da matriz[%d][%d]: ", (cont/j) + 1, cont%j+1);
    scanf("%f", matriz + cont);
  }

  for (int cont = 0; cont < i*j; cont++){
    if (!(cont%j)){
      printf ("| %7.2f",matriz[cont]);
    } else{
      if (cont%j == j-1){
      printf ("%7.2f |\n", matriz[cont]);
      } else{
      printf (" %7.2f ", matriz[cont]);
      }
    }
  }
}