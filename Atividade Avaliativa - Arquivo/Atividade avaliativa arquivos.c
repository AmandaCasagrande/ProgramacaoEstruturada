#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*
• Ao final do programa, gravar os dados de todos os alunos que foram informados em arquivo
(seja em modo texto ou binário)
• Criar uma opção para LER os dados gravados no arquivo e imprimí-los na tela
*/

struct Aluno{
  int numeroMatricula;
  int valorNota;
};

void cadastrarAluno(struct Aluno *alunoP, int posicao);
void imprimirResultados(struct Aluno *alunoP, int qtdAlunos);
void salvarEmArquivo(struct Aluno *alunoP, int qtdAlunos);
void lerNotasDoArquivo();

int main() {
  int opcao, posicao = 0;
  struct Aluno *aluno = (struct Aluno*) malloc(sizeof(struct Aluno));

  lerNotasDoArquivo();

  do {
    cadastrarAluno(aluno, posicao);
    posicao++;
    
    printf("Deseja encerrar? 1 para SIM e 2 para NÃO: ");
    scanf("%d", &opcao);    

    if (opcao == 2) {
      printf("-------------------------------\n\n");
      aluno = (struct Aluno*) realloc(aluno, (posicao + 1) * sizeof(struct Aluno));
    }
  } while (opcao != 1);

  imprimirResultados(aluno, posicao);
  salvarEmArquivo(aluno, posicao);

  free(aluno);
  return 0;
}

void cadastrarAluno(struct Aluno *alunoP, int posicao){
  int numero, nota;
  
  printf("Digite o número da matrícula: ");
  scanf("%d", &numero);
  printf("Digite a nota do(a) aluno(a): ");
  scanf("%d", &nota);
  
  alunoP[posicao].numeroMatricula = numero;
  alunoP[posicao].valorNota = nota;
}

void imprimirResultados(struct Aluno *alunoP, int qtdAlunos){
  int soma = 0;
  float media;
  int maiorNota = alunoP[0].valorNota;
  int menorNota = alunoP[0].valorNota;
  
  for (int i = 0; i < qtdAlunos; i++) {
    struct Aluno aluno = alunoP[i];

    if (aluno.valorNota > maiorNota) {
      maiorNota = aluno.valorNota;
    }

    if (aluno.valorNota < menorNota) {
      menorNota = aluno.valorNota;
    }    

    soma = soma + aluno.valorNota;
  }
  
  media = (float) soma / qtdAlunos;
  
  printf("\nResultado: \n\n");
  printf("Nota média da turma: %.2f \n", media);
  printf("Quantidade de alunos: %d \n", qtdAlunos);
  printf("Maior nota: %d \n", maiorNota);
  printf("Menor nota: %d \n", menorNota);
}

void salvarEmArquivo(struct Aluno *alunoP, int qtdAlunos) {
  FILE *arquivo;
  char temp[100];

  arquivo = fopen("alunos.txt", "w");

  for (int i = 0; i < qtdAlunos; i++) {
    struct Aluno aluno = alunoP[i];

    sprintf(temp, "Matrícula: %d", aluno.numeroMatricula);
    fputs(temp, arquivo);
    fputc('\n', arquivo);
    memset(temp, 0, 100);

    sprintf(temp, "Nota: %d", aluno.valorNota);
    fputs(temp, arquivo);
    fputc('\n', arquivo);
    memset(temp, 0, 100);
  }  

  fclose(arquivo);  
}

void lerNotasDoArquivo() {
  FILE *arquivo;
  int opcao;
  char c;

  arquivo = fopen("alunos.txt", "r");

  if (arquivo != NULL) {
    printf("Um arquivo com as notas foi localizado, deseja exibi-lo? \n");
    printf("1 para SIM e 2 para NÃO: ");
    scanf("%d", &opcao); 

    if (opcao == 1) {
      printf("\n ======= Início do arquivo ======= \n\n");

      c = fgetc(arquivo);
      while (c != EOF)
      {
          printf ("%c", c);
          c = fgetc(arquivo);
      }    

      printf("\n ======= Fim do arquivo ======= \n");  
    }

    printf("\n");
    fclose(arquivo);
  }
}