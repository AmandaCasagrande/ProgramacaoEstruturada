#include <stdio.h>
#include <stdlib.h>

//5. Leia um numero real e imprima a quinta parte deste n�mero.

int main()
{
    float valorEntrada;

    printf("Digite um valor real: ");
    scanf("%f", &valorEntrada);

    printf("Quinta parte do valor: %f", valorEntrada/5);

    return 0;
}
