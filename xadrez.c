#include <stdio.h>

// Definição de constantes para facilitar a manutenção do código
#define BISPO_MOV 5
#define TORRE_MOV 5
#define RAINHA_MOV 8
#define CAVALO_MOV1 2 // Movimentos na vertical (Baixo)
#define CAVALO_MOV2 1 // Movimento na horizontal (Esquerda)

int main() {
    // Movimentação do Bispo (Diagonal superior direita -> Cima + Direita)
    printf("Movimentação do Bispo:\n");
    for (int i = 0; i < BISPO_MOV; i++) {
        printf("Cima\n");
        printf("Direita\n");
    }
    printf("\n");
    
    // Movimentação da Torre (Para a direita)
    printf("Movimentação da Torre:\n");
    for (int i = 0; i < TORRE_MOV; i++) {
        printf("Direita\n");
    }
    printf("\n");
    
    // Movimentação da Rainha (Para a esquerda)
    printf("Movimentação da Rainha:\n");
    for (int i = 0; i < RAINHA_MOV; i++) {
        printf("Esquerda\n");
    }
    printf("\n");
    
    // Movimentação do Cavalo (L -> Baixo e Esquerda)
    printf("Movimentação do Cavalo:\n");
    for (int i = 0; i < CAVALO_MOV1; i++) {
        printf("Baixo\n");
    }
    
    int j = 0;
    while (j < CAVALO_MOV2) {
        printf("Esquerda\n");
        j++;
    }
    
    return 0;
}
