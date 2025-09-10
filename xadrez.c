#include <stdio.h>

#define CASAS_BISPO 5
#define CASAS_TORRE 5
#define CASAS_RAINHA 8

int main() {
    // --- Movimentação do Bispo ---
    // Movimento na diagonal superior direita.
    // Combina as direções "Cima" e "Direita".
    // Uso do loop 'for' para a movimentação.
    printf("--- Movimentacao do Bispo ---\n");
    for (int i = 0; i < CASAS_BISPO; i++) {
        printf("Diagonal Superior Direita: ");
        printf("Cima, ");
        printf("Direita\n");
    }
    printf("Movimentacao do Bispo finalizada.\n\n");

    // --- Movimentação da Torre ---
    // Movimento para a direita.
    // Uso do loop 'while' para a movimentação.
    printf("--- Movimentacao da Torre ---\n");
    int i = 0;
    while (i < CASAS_TORRE) {
        printf("Direita\n");
        i++;
    }
    printf("Movimentacao da Torre finalizada.\n\n");

    // --- Movimentação da Rainha ---
    // Movimento para a esquerda.
    // Uso do loop 'do-while' para a movimentação.
    printf("--- Movimentacao da Rainha ---\n");
    int j = 0;
    do {
        printf("Esquerda\n");
        j++;
    } while (j < CASAS_RAINHA);
    printf("Movimentacao da Rainha finalizada.\n\n");

    return 0;
}
