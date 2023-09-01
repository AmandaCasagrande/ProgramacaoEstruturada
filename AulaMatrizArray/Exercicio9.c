#include <stdio.h>

int main() {
    int array[5];
    int maiorValor, menorValor, total = 0;
    double media;
    
    for (int i = 0; i <= 4; i++) {
        printf("Digite a posição %d do vetor: ", i);
        scanf("%d", &array[i]);
        total += array[i];
        
        if (i == 0) {
            maiorValor = array[0];
            menorValor = array[0];
        } else {
            if (maiorValor < array[i]) {
                maiorValor = array[i];
            }
            
            if (menorValor > array[i]) {
                menorValor = array[i];
            }
        }
    }
    
    printf("\n\nValores lidos: \n");
    for (int i = 0; i <= 4; i++) {
        printf("Possição %d: %d \n", i, array[i]);
    }
    
    printf("\nMaior valor: %d \n", maiorValor);
    printf("Menor valor: %d \n", menorValor);
    media = total / 5;
    printf("Média: %f \n", media);
    
    return 0;
}
  