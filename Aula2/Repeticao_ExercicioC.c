#include <stdio.h>

int main() {

     //c. Faça um algoritmo utilizando o comando while que mostra uma contagem regressiva na
//tela, iniciando em 10 e terminando em 0. Mostrar uma mensagem “FIM!” apos a contagem

    int numero = 10;
    while (numero > 0){
        numero = numero - 1;
        printf("%d\n", numero);
    }

    printf("FIM!");

    return 0;
}
