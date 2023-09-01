#include <stdio.h>
#include <stdlib.h>
/*
11. Crie um programa que declare uma estrutura (registro) para o cadastro de alunos.
(a) Deverão ser armazenados, para cada aluno: matrícula, sobrenome (apenas um) e ano de nascimento.
(b) Ao início do programa, o usuário devera informar o número de alunos que serão armazenados
(c) O programa devera alocar dinamicamente a quantidade necessária de memória para
armazenar os registros dos alunos.
(d) O programa devera pedir ao usuário que entre com as informações dos alunos.
(e) Ao final, mostrar os dados armazenados e liberar a memória alocada
*/

struct aluno{
  int matricula;
  char nome[40];
  int anoNascimento;
};

typedef struct aluno aluno;

int main(){
  int n, i;
  aluno *ptr;
  printf("Digite o número de registros a serem alocados: ");
  scanf("%d", &n);

  ptr = (aluno*)malloc(n * sizeof(aluno));

  for(i = 0; i < n; i++){
    printf("Número de matricula: ");
    scanf("%d", &ptr[i].matricula);
    printf("Nome: ");
    scanf(" %[^\n]", ptr[i].nome);
    printf("Ano de nascimento: ");
    scanf("%d", &ptr[i].anoNascimento);
    printf("\n\n");
  }

  for(i = 0 ; i < n; i++){
    printf("Número de matricula %d \n", ptr[i].matricula);
    printf("Nome: %s \n" , ptr[i].nome);
    printf("Ano de nascimento: %d\n\n" , ptr[i].anoNascimento);
  }

  free(ptr);
  return 0;
}