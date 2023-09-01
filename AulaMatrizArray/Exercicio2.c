#include <stdio.h>

int main() {
    float array[10];
    float arrayAoQuadrado[10];
    
    for (int i = 0; i <= 9; i++) {
        printf("Digite a posição %d do vetor: ", i);
        scanf("%f", &array[i]);
        
        arrayAoQuadrado[i] = array[i] * array[i];
    }
    
    printf("\n\nValores lidos: \n");
    for (int i = 0; i <= 9; i++) {
        printf("Posição %d: %.2f \n", i, array[i]);
    }
    
    printf("\nValores lidos, ao quadrado: \n");
    for (int i = 0; i <= 9; i++) {
        printf("Posição %d: %.2f \n", i, arrayAoQuadrado[i]);
    }

    
    return 0;
}
  