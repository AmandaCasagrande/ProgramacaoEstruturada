#include <stdio.h>
/*
1. Escreva um programa que declare um inteiro, um real e um char, e ponteiros para inteiro, real, e char.
Associe as variáveis aos ponteiros (use &). Modifique os valores de cada
variável usando os ponteiros.Imprima os valores das variáveis antes e após a modificação.
*/

int main(void) {
  int inteiro, *inteiroP;
  float real, *realP;
  char caracter, *caracterP;

  printf("Digite um valor inteiro: ");
  scanf("%d", &inteiro);
   
  printf("Digite um valor real: ");
  scanf("%f", &real);
  
  printf("Digite um char: ");
  scanf("%s", &caracter);

  printf("\n\nAntes de modificar:\n");
  printf("Inteiro = %d\n", inteiro);
  printf("Real = %f\n", real);
  printf("Char = %s\n", &caracter);

  inteiroP = &inteiro;
  realP = &real;
  caracterP = &caracter;

  *inteiroP = inteiro + 5;
  *realP = real * 2;
  *caracterP += 1;

  printf("\n\nDepois de modificar:\n");
  printf("Inteiro = %d\n", inteiro);
  printf("Real = %f\n", real);
  printf("Char = %s", &caracter);
}