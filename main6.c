#include <stdio.h>
#include <stdlib.h>

//6. Leia uma temperatura em graus Celsius e apresente-a convertida em graus Fahrenheit. A formula de
//conversão é: F = C (9.0/5.0)+32.0, sendo F a temperatura em Fahrenheit e C a temperatura em ∗
//Celsius

int main()
{
    float valorCelsius, valorFar;

    printf("Digite a temperatura em Celsius: ");
    scanf("%f", &valorCelsius);

    valorFar = valorCelsius * (9.0/5.0) + 32.0;
    printf("Temperatura em Fahrenheit: %4.f F", valorFar);

    return 0;
}
