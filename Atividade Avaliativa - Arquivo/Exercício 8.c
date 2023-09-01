#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
8. Crie um programa que leia o arquivo anterior, de telefones, solicite o nome de uma pessoa na
tela, procure se esse nome se encontra no arquivo e imprima na tela o nome e o número de telefone
dessa pessoa
*/
int main(){
  FILE *arquivo;
  char nome[100];
  char nomeNoArquivo[100];
  char telefone[50];
  int achou = 0;

  arquivo = fopen("contatos.txt", "r");

  printf("Informe o nome do contato para pesquisa: ");
  scanf(" %[^\n]s", nome);

  while (fscanf(arquivo,"%s", nomeNoArquivo) == 1) {
    if (strstr(nomeNoArquivo, nome) != 0) {
      achou = 1;

      // Avança até a quebra de linha
      while (fgetc(arquivo) != '\n') {
        fgetc(arquivo);
      }

      // Pega o telefone que está na próxima linha
      fgets(telefone, 100, arquivo);         
    }
  }

  if (achou == 0) {
    printf("\nO contato de nome %s não foi localizado!", nome);
  } else {
    printf("\nO contato de foi localizado!");
    printf("\nNome: %s", nome);
    printf("\nTelefone: %s", telefone);
  }

  fclose(arquivo);
}