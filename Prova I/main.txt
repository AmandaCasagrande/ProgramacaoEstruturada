#include <stdio.h>

int contP = 0;
int contS = 0;
int contA = 0;

int controle(int opcao){
    int retorno = 1;
    
    switch (opcao){
        case 1:
            if (contP == 2) {
                printf("O limite de alunas em programação foi atingido \n");
                printf("Alunos de Programacao: %d \n", contP);
                retorno = 0;
                break;
            }
            
            contP = contP + 1;
            
            break;
        case 2:
            if (contS == 4) {
                printf("O limite de alunas em sistemas foi atingido \n");
                printf("Alunos de Sistemas: %d \n", contS);
                retorno = 0;
                break;                
            }
            
            contS = contS + 1;
            break;
        case 3:
            if (contA == 3) {
                printf("O limite de alunas em algoritmos foi atingido \n");
                printf("Alunos de Algoritmos: %d \n", contA);
                retorno = 0;
                break;                
            }
                    
            contA = contA + 1;
            break;
    }
    
    return retorno;
}

void cadastro(){
    char nomeAluno[20];
    int temaAluno;
    int entrada = 1;
    
    while (entrada <= 4){
        printf("Digite seu nome: ");
        scanf("%s", nomeAluno);
        printf("\n1 - Programacao\n2 - Sistemas\n3 - Algoritmos\n\n");
        printf("Digite seu tema escolhido: ");
        scanf("%d", &temaAluno);
        int alunoFoiAdicionado = controle(temaAluno);
        
        if (alunoFoiAdicionado == 1) {
            entrada++;
        }
    }
}

void resultado(contP, contS, contA){
    
    int soma = contP + contS + contA;
    
    if (soma >= 4){
        printf("Numero maximo de alunos atingido!\n");
        printf("Alunos de Programacao: %d \n", contP);
        printf("Alunos de Sistemas: %d \n", contS);
        printf("Alunos de Algoritmos: %d \n", contA);
    }
    
}

int main() {
    cadastro();
    resultado(contP, contS, contA);
    return 0;
}
  