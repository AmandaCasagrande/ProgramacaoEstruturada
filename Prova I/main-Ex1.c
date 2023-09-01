#include <stdio.h>

int pegarPosicoesVetor (int x){
    int soma = 0;
    int cont = 1;
    
    soma = x + x;
    
    while (soma <= 100){
        soma = soma + x;
        cont = cont + 1;
    }
    
    return cont;
}

void inserirValorNaPosicao(int *vetor, int pos, int valor) {
    vetor[pos] = valor;
}

void preencherVetor(int *vetor, int x) {
    int soma = 0;
    int cont = 1;
    
    soma = x + x;
    inserirValorNaPosicao(vetor, cont, soma);
    
    while (soma <= 100){
        soma = soma + x;
        cont = cont + 1;
        inserirValorNaPosicao(vetor, cont, soma);
    }
}


void imprimirVetor(int *vetor, int qtdPos) {
    for (int i = 1; i <= qtdPos; i++) {
        printf("Posição %d: Valor: %d\n", i, vetor[i]);
    }
}

int somarVetor(int *vetor, int qtdPos) {
    int soma = 0;
    for (int i = 1; i <= qtdPos; i++) {
        soma = soma + vetor[i];
    }    
    return soma;
}

int main() {
    int valorInteiro;
    printf("Insira um valor inteiro: ");
    scanf("%d", &valorInteiro);
    
    int posicoesVetor = pegarPosicoesVetor(valorInteiro);
    int vetor[posicoesVetor];
    
    printf("\nQtd Posições: %d\n\n", posicoesVetor);
    
    preencherVetor(vetor, valorInteiro);
    imprimirVetor(vetor, posicoesVetor);
    
    int soma = somarVetor(vetor, posicoesVetor);
    printf("\nA soma dos elementos do vetor é: %d", soma);
}