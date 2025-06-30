#include <stdio.h>

int main() {
    //MOVIMENTO DA TORRE (exemplo com for)
    printf("Movimento da Torre:\n");
    for (int i = 0; i < 3; i++) {
        printf("Direita\n");
    }

    //MOVIMENTO DO BISPO (exemplo com while)
    printf("Movimento do Bispo:\n");
    int j = 0;
    while (j < 3) {
        printf("Diagonal Direita Cima\n");
        j++;
    }

    //MOVIMENTO DA RAINHA (exemplo com do-while)
    printf("Movimento da Rainha:\n");
    int k = 0;
    do {
        printf("Cima\n");
        k++;
    } while (k < 2);

    //MOVIMENTO DO CAVALO
    printf("Movimento do Cavalo:\n");

    int casasBaixo = 2;
    int casasEsquerda = 1;

    //LOOP EXTERNO: MOVIMENTO PARA BAIXO
    for (int i = 0; i < casasBaixo; i++) {
        printf("Baixo\n");

        //LOOP INTERNO WHILE (ANINHADO DENTRO DO FOR)
        int contador = 0;
        while (contador < 0) {
            contador++;
        }
    }

    //MOVIMENTO FINAL: UMA CASA PARA ESQUERDA
    int l = 0;
    while (l < casasEsquerda) {
        printf("Esquerda\n");
        l++;
    }
        
    return 0;
}
