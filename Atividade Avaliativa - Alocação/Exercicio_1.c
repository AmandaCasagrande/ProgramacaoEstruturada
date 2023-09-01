#include <stdio.h>
#include <stdlib.h>
/*
1. Crie um programa que:
(a) Aloque dinamicamente um array de 5 numeros inteiros,
(b) Peça para o usuario digitar os 5 numeros no espaço alocado,
(c) Mostre na tela os 5 numeros,
(d) Libere a memoria alocada.
*/

int main(void) {
  int *ponteiro;
  ponteiro = (int*)malloc(5 * sizeof(int));

  for(int i = 0 ; i < 5; i++){
    printf("Digite int[%d]: ", i + 1);
    scanf("%d", &ponteiro[i]);
  }

  for(int i = 0 ; i < 5; i++){
    printf("%d  ", ponteiro[i]);
  }

  free(ponteiro);
  return 0;
}