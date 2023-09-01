#include <stdio.h>
/*
5. Faça um programa que leia dois valores inteiros e chame uma função 
que receba ponteiros destes 2 valores de entrada e devolva o maior
valor na primeira variável e o menor valor na segunda variável.
Escreva o conteúdo das 2 variáveis na tela.
*/

void ordenarConteudo(int *p1, int *p2);

int main(void) {
  int valor1, valor2;

  printf("Digite um valor inteiro: ");
  scanf("%d", &valor1);
  
  printf("Digite outro valor inteiro: ");
  scanf("%d", &valor2);

  ordenarConteudo(&valor1, &valor2);
  
  printf("\nValores ordenados:\n");
  printf("%d\n", valor1);
  printf("%d\n", valor2);  
}

void ordenarConteudo(int *p1, int *p2){
  if (*p2 > *p1) {
    int aux;
    aux = *p1;
    *p1 = *p2;
    *p2 = aux;    
  }
}  
