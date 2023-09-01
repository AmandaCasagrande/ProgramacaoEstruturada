#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
7. Faça um programa que permita que o usuario entre com diversos nomes e telefone para cadastro,
e crie um arquivo com essas informações, uma por linha. O usuário finaliza a entrada com ‘0’ para
o telefone.
*/
int main(){
  FILE *arquivo;
  char nome[100];
  char telefone[50];

  arquivo = fopen("contatos.txt", "w");

  printf("Informe o nome do contato: ");
  scanf(" %[^\n]s", nome);

  printf("Informe o telefone do contato: ");
  scanf(" %[^\n]s", telefone);
  
  while (telefone[0] != '0') {
    fputs(nome, arquivo);
    fputc('\n', arquivo);
    fputs(telefone, arquivo);
    fputc('\n', arquivo);

    printf("Informe o nome do contato: ");
    scanf(" %[^\n]s", nome);

    printf("Informe o telefone do contato: ");
    scanf(" %[^\n]s", telefone);
  }

  fclose(arquivo);
}