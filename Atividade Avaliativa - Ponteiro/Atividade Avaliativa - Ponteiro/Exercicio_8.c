#include <stdio.h>
/*
8. Crie um programa que contenha um array de float contendo 10 elementos.
Imprima o endereço de cada posição desse array.
*/

int main(void) {
  float array[10] = {1.2, 2.3, 3.4, 4.5, 5.6, 6.7, 7.8, 8.9, 9.0, 0.1};

  for(int i = 0; i <= 10; i++){
    printf("Endereço na posição %d: %p\n", i, &array[i]);
  }
}