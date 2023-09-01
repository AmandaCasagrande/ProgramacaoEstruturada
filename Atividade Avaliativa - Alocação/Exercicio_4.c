#include <stdio.h>
#include <stdlib.h>

/*
4.Faça um programa que receba do usuário o tamanho de uma string e chame uma função para alocar dinamicamente essa string. Em seguida, o usuário deverá informar o conteúdo dessa string. O programa imprime a string sem suas vogais.

*/

int main(void) {
  char *ponteiro;
  int tamanhoString, i;

  printf("Digite o tamanho da String: ");
  scanf("%d", &tamanhoString);

  ponteiro = (char*)malloc(tamanhoString * sizeof(char));

  printf("Digite a String: ");
  scanf(" %[^\n]", ponteiro);
  i = 0;

  while(ponteiro[i] != 0) {
    if(ponteiro[i]!= 'a' && ponteiro[i]!= 'A' && ponteiro[i]!= 'e' && ponteiro[i]!= 'E' && ponteiro[i]!= 'i' && ponteiro[i]!= 'I' && ponteiro[i]!= 'o' && ponteiro[i]!= 'O' && ponteiro[i]!= 'u' && ponteiro[i]!= 'U')
    
    printf("%c  ", ponteiro[i]);
    i++;
  }
  
  return 0;
}