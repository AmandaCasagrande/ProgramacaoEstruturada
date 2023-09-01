#include <stdio.h>
#include <math.h>
#include <stdlib.h>

void recebeInformacao(float *peso, float *altura);
void calculaIMC(float peso, float altura, float *imc);
void imprimeResultado(float *imc);

int main(void) {
  float peso, altura, imc;
  int opcao;

  do {
    recebeInformacao(&peso, &altura);
    calculaIMC(peso, altura, &imc);
    imprimeResultado(&imc);
    
    printf("Deseja continuar? \n");
    printf("1 - Sim \n");
    printf("2 - Não \n");
    scanf("%d", &opcao);

  } while (opcao == 1);
  
  return 0;
}

void recebeInformacao(float *pesoP, float *alturaP){
  float peso, altura;
  
  printf("Digite seu peso: ");
  scanf("%f", &peso);
  *pesoP = peso;
  
  printf("Digite sua altura: ");
  scanf("%f", &altura);
  *alturaP = altura;
}

void calculaIMC(float peso, float altura, float *imcP){
    *imcP = peso / (pow (altura, 2));
}

void imprimeResultado(float *imcP){
 
  if (*imcP < 18.5){
    printf("Abaixo do peso");
  }

  if (*imcP >= 18.5 && *imcP <= 24.9){
    printf("Peso normal");
  }

  if (*imcP >= 25 && *imcP <= 29.9){
    printf("Sobrepeso");
  }

  if (*imcP >= 30 && *imcP <= 34.9){
    printf("Obesidade Grau 1");
  }

  if (*imcP >= 35 && *imcP <= 39.9){
    printf("Obesidade Grau 2");
  }

  if (*imcP > 40){
    printf("Obesidade Grau 3");
  }

  printf("\n");
  printf("\n");
}