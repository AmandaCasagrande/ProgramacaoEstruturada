#include <stdio.h>
/*
2. Escreva um programa que contenha duas variáveis inteiras. Compare seus endereços e
exiba na tela o maior endereço.
*/
int main(void) {
  int var1, var2;
  int *p1, *p2;

  printf("Digite um valor inteiro: ");
  scanf("%d", &var1);

  printf("Digite outro valor inteiro: ");
  scanf("%d", &var2);

  p1 = &var1;
  p2 = &var2;

  if (p1 > p2){
    printf("Maior endereço é %p", p1);
  } else {
    printf("Maior endereço é %p", p2);
  }
}