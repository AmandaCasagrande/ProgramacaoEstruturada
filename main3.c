#include <stdio.h>
#include <stdlib.h>

//3. Pe�a ao usuario para digitar tr�s valores inteiros e imprima a soma deles:

int main()
{
    int entrada, soma;
    int valorA, valorB, valorC;
    printf("Digite tres valor abaixo:\n");
    scanf("%d", &valorA);
    scanf("%d", &valorB);
    scanf("%d", &valorC);

    soma = valorA + valorB + valorC;

    printf("%d + %d + %d = %d", valorA, valorB, valorC, soma);

    return 0;
}
