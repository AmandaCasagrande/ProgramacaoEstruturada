#include <stdio.h>
/*
4. Faça um programa que leia 2 valores inteiros e chame uma função
que receba o ponteiro destas 2 variáveis e troque o seu conteúdo,
ou seja, esta função é chamada passando duas
variáveis A e B por exemplo e, após a execução da função,
A conterá o valor de B e B terá o valor de A.
*/

void trocaConteudo(int *p1, int *p2);
void imprimeConteudo(int *p1, int *p2);

int main(void) {
  int valor1, valor2;

  printf("Digite um valor inteiro: ");
  scanf("%d", &valor1);
  
  printf("Digite outro valor inteiro: ");
  scanf("%d", &valor2);

  printf("\nValores antes da troca:");
  imprimeConteudo(&valor1, &valor2);
  
  trocaConteudo(&valor1, &valor2);

  printf("\nValores depois da troca:");
  imprimeConteudo(&valor1, &valor2);
}

void trocaConteudo(int *p1, int *p2){
  int aux;

  aux = *p1;
  *p1 = *p2;
  *p2 = aux;
}

void imprimeConteudo(int *p1, int *p2){
  printf("\n");
  printf("%d\n", *p1);
  printf("%d\n", *p2);
}
