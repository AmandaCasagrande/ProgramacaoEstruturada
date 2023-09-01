#include <stdio.h>
#include <string.h>

struct Volume{
  float peso;
  float valor;
};

struct Estado{
  char siglaEstado[2];
  float taxaEnvio;
};

struct Tipo{
  int tipoEnvio;
  float valor;
};

struct Volume cadastrarVolume(){
  struct Volume volume;

  printf("Digite o peso do volume: ");
  scanf("%f", &volume.peso);

  if (volume.peso <= 1){
    volume.valor = 5;
  }

  if (volume.peso > 1 && volume.peso <= 5){
    volume.valor = 10;
  }

  if (volume.peso > 5 && volume.peso <= 10){
    volume.valor = 20;
  }

  if (volume.valor > 10){
    volume.valor = 30;
  }

  return volume;
}; 

struct Estado cadastrarEstado(){
  struct Estado estado;

  printf("Digite o estado para o envio: ");
  scanf("%s", &estado.siglaEstado[2]);

  if(strcmp(estado.siglaEstado, "AC") ||
    (strcmp(estado.siglaEstado, "AL")) == 0){
    estado.taxaEnvio = 10;
  }

  if(strcmp(estado.siglaEstado, "AP") ||
    (strcmp(estado.siglaEstado, "AM")) == 0){
    estado.taxaEnvio = 11;
  }

  if(strcmp(estado.siglaEstado, "BA") ||
    (strcmp(estado.siglaEstado, "CE")) == 0){
    estado.taxaEnvio = 12;
  }

  if(strcmp(estado.siglaEstado, "ES") ||
    (strcmp(estado.siglaEstado, "GO")) == 0){
    estado.taxaEnvio = 9;
  }

  if(strcmp(estado.siglaEstado, "MA") ||
    (strcmp(estado.siglaEstado, "MT")) == 0){
    estado.taxaEnvio = 8;
  }

  if(strcmp(estado.siglaEstado, "MS") ||
    (strcmp(estado.siglaEstado, "MG")) == 0){
    estado.taxaEnvio = 7;
  }

  if(strcmp(estado.siglaEstado, "PA") ||
    (strcmp(estado.siglaEstado, "PB")) == 0){
    estado.taxaEnvio = 13;
  }

  if(strcmp(estado.siglaEstado, "MS") ||
    (strcmp(estado.siglaEstado, "MG")) == 0){
    estado.taxaEnvio = 7;
  }

  if(strcmp(estado.siglaEstado, "PI") ||
    (strcmp(estado.siglaEstado, "RN")) == 0){
    estado.taxaEnvio = 10;
  }

  if(strcmp(estado.siglaEstado, "RJ") ||
    (strcmp(estado.siglaEstado, "SP")) == 0){
    estado.taxaEnvio = 7;
  }

  if(strcmp(estado.siglaEstado, "RO") || 
    (strcmp(estado.siglaEstado, "RR")) == 0){
    estado.taxaEnvio = 11;
  }

  if(strcmp(estado.siglaEstado, "SE") || 
    (strcmp(estado.siglaEstado, "TO") || 
    (strcmp(estado.siglaEstado, "DF")) == 0)){

    estado.taxaEnvio = 11;
  }

  if(strcmp(estado.siglaEstado, "SP") || 
    (strcmp(estado.siglaEstado, "SC")) == 0){
    estado.taxaEnvio = 8;
  }

  if(strcmp(estado.siglaEstado, "PR") || 
    (strcmp(estado.siglaEstado, "RS")) == 0){
    estado.taxaEnvio = 7;
  }

  return estado;
};

struct Tipo cadastrarTipo(){
  struct Tipo tipo;
  printf("1 - PAC\n2 - SEDEX\n");
  printf("Digite o tipo de envio: ");
  scanf("%d", &tipo.tipoEnvio);

  switch(tipo.tipoEnvio){

    case 1: 
      tipo.valor = 7;
      break;

    case 2:
      tipo.valor = 15;
      break;
  }

  return tipo;
};

float CalcularEnvio (struct Volume volume, struct Estado estado, struct Tipo tipo) {

  float calculoEnvio = volume.valor + estado.taxaEnvio + tipo.valor;

  return calculoEnvio;
};

void ImprimirValor(float totalEncomenda, struct Volume volume, struct     Estado estado, struct Tipo tipo){
  printf("Peso: %.2f KG\n", volume.peso);
  printf("Estado: %s\n", &estado.siglaEstado[2]);
  printf("Tipo de Envio: %d\n", tipo.tipoEnvio);
  printf("Total da encomenda: R$ %.2f\n", totalEncomenda);
  printf("\n\n");
}

int main(void) {
  struct Volume v = {0.0, 0.0};
  struct Volume vetorVolume[5];

  struct Estado e;
  struct Estado vetorEstado[5];

  struct Tipo t;
  struct Tipo vetorTipo[5];

  for (int i = 0; i < 5; i++){
    vetorVolume[i] = v;
  }

  for (int i = 0; i < 5; i++){
    v = cadastrarVolume();
    vetorVolume[i] = v;

    e = cadastrarEstado();
    vetorEstado[i] = e;

    t = cadastrarTipo();
    vetorTipo[i] = t;

    int opcao;
    printf("\n\nDeseja cadastrar mais um envio?\n");
    printf("Digite 1 para Sim ou 2 para Não: ");
    scanf("%d", &opcao);
    printf("\n");

    if (opcao == 2){
      break;
    }
  }

  printf("\n\n");

  for (int i = 0; i < 5; i++) {
    if (vetorVolume[i].peso != 0.0) {
      float total = CalcularEnvio(vetorVolume[i], vetorEstado[i], vetorTipo[i]);
      ImprimirValor(total, vetorVolume[i], vetorEstado[i], vetorTipo[i]);
    }
  }
  return 0;
}
