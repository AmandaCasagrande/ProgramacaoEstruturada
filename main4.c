#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//4. Leia um numero real e imprima o resultado do quadrado desse número.

int main()
{
    float valorEntrada;

    printf("Digite um valor real: ");
    scanf("%f", &valorEntrada);

    printf("Potencia de 2: %f", pow(valorEntrada, 2));

    return 0;
}
