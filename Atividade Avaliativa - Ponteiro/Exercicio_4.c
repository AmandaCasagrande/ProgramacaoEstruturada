#include <stdio.h>
/*
4. Faça um programa que leia 2 valores inteiros e chame uma função que receba o ponteiro
destas 2 variáveis e troque o seu conteúdo, ou seja, esta função é chamada passando duas
variáveis A e B por exemplo e, após a execução da função, A conterá o valor de B e B terá o
valor de A.
*/

void recebeConteudo(int *p1, int *p2);

int main(void) {
  int valor1, valor2;

  printf("Digite um valor inteiro: ");
  scanf("%d", &valor1);
  
  printf("Digite outro valor inteiro: ");
  scanf("%d", &valor2);
  
  recebeConteudo(&valor1, &valor2);
}

void recebeConteudo(int *p1, int *p2){
  int valor1, valor2;
  p1 = &valor1;
  p2 = &valor2;

  printf("Valores antes:");
  printf("%d\n", valor1);
  printf("%d\n", valor2);

  valor1 = valor2;
  valor2 = valor1;

  printf("Valores depois da troca:");
  printf("%d\n", valor1);
  printf("%d\n", valor2);
}

