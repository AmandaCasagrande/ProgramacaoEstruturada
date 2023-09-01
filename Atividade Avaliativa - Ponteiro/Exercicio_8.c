#include <stdio.h>
#include <stdlib.h>
/*
8. Crie um programa que contenha um array de float contendo 10 elementos. Imprima o
endereço de cada posição desse array.
*/

int main(void) {
  float elementosArray[10];

  for(int i = 0; i < 10; i++){
    int *x;
    printf("%d", rand() % 100);
    *x = i;
    printf("%p", x);
  }
}