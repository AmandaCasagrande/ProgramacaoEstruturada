#include <stdio.h>
#include <stdlib.h>
/*
8. Faça um programa para armazenar em memória um vetor de dados contendo 1500 valores do tipo int, usando a função de alocação dinâmica de memória CALLOC:
(a) Faça um loop e verifique se o vetor contém realmente os 1500 valores inicializados com zero (conte os 1500 zeros do vetor).
(b) Atribua para cada elemento do vetor o valor do seu indice junto a este vetor.
(c) Exibir na tela os 10 primeiros e os 10 últimos elementos do vetor
*/
int main(void) {
  int *ponteiro;

  ponteiro = (int*)calloc(1500 , sizeof(int));

  for(int i = 0 ; i < 1500; i++){
    ponteiro[i] = i;
  }

  for(int i = 0 ; i < 1500; i++){
    if(i <= 9 || i > 1489)
    printf("%d ", ponteiro[i]);
  }

  free(ponteiro);
  return 0;
}