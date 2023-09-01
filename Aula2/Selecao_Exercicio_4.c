#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//4. Faça um programa que leia um numero e, caso ele seja positivo, calcule e mostre:
// O numero digitado ao quadrado
// A raiz quadrada do numero digitado

int main()
{
    float numeroEntrada, quadrado, raizQuadrada;

    printf("Digite um numero: ");
    scanf("%f", &numeroEntrada);

    if (numeroEntrada > 0){
        quadrado = pow(numeroEntrada, 2);
        raizQuadrada = sqrt(numeroEntrada);
    }
    printf("Ao quadrado - resultado: %2.f \n", quadrado);
    printf("Raiz quadrada - resultado: %2.f", raizQuadrada);


    return 0;
}
