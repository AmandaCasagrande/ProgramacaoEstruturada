#include <stdio.h>

int main() {
    //. Faça um programa que leia um numero inteiro positivo par N e imprima todos os numeros
//pares de 0 ate´ N em ordem crescente.

    int numero, resto;
    printf("Digite um número inteiro: ");
    scanf("%d", &numero);

    while (numero > 0){
        numero = numero - 1;
        resto = numero % 2;

        if (resto == 0){
            printf("%d\n", numero);
        }
    }

    return 0;
}
