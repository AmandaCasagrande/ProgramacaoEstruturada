#include <stdio.h>

int main() {
  // a. Faça um programa que determine e mostre os cinco primeiros multiplos de 3,
//considerando numeros maiores que 0.

    int m, n;

    printf("Múltiplos de 3:\n");

    for (int i = 1; i <= 5; i++){
        m = 3 * i;
        printf("3 x %d = %d\n", i, m);
    }

    return 0;
}
