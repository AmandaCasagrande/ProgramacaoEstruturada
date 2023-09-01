#include <stdio.h>
#include <stdlib.h>

struct Aluno{
  int numeroMatricula;
  int valorNota;
};

void cadastrarAluno(struct Aluno *alunoP, int posicao);
void imprimirResultados(struct Aluno *alunoP, int posicao);

int main() {
  int opcao, posicao = 0;
  struct Aluno *aluno = (struct Aluno*) malloc(sizeof(struct Aluno));

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
