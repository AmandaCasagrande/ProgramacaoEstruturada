#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
1. Escreva um programa que:
(a) Crie/abra um arquivo texto de nome “arq.txt”
(b) Permita que o usuario grave diversas informações nesse arquivo, at ´ e que o usu ´ ario ´ entre com o letraactere ‘0’
(c) Feche o arquivo
Agora, abra e leia o arquivo, e escreva na tela todos as informações armazenadas.
*/
int main(){
  FILE *arquivo;
  char letra;
  arquivo = fopen("arq.txt", "w");

  printf("\nInsira um carecter ou 0 para finalizar: ");
  scanf("%c", &letra);

  while (letra != '0') {
    fputc(letra, arquivo);

    printf("Insira um carecter ou 0 para finalizar: ");
    scanf(" %c", &letra);
  }

  fclose(arquivo);
  arquivo = fopen("arq.txt", "r");

  printf("\nCarecteres armazenados:\n");
  letra = fgetc(arquivo);

  while (letra != EOF){
    printf("%c \n",letra);
    letra = fgetc(arquivo);
  }

  fclose(arquivo);
}