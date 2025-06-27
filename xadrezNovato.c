#include <stdio.h>

int main() {
    int i;

    // Movimento da TORRE - 5 casas para a direita (usando for)
    printf("Movimento da Torre:\n");
    for (i = 1; i <= 5; i++) {
        printf("Casa %d: Direita\n", i);
    }

    // Movimento do BISPO - 5 casas na diagonal (usando while)
    printf("\nMovimento do Bispo:\n");
    i = 1;
    while (i <= 5) {
        printf("Casa %d: Cima, Direita\n", i);
        i++;
    }

    // Movimento da RAINHA - 8 casas para a esquerda (usando do-while)
    printf("\nMovimento da Rainha:\n");
    i = 1;
    do {
        printf("Casa %d: Esquerda\n", i);
        i++;
    } while (i <= 8);

    return 0;
}
