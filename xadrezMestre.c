#include <stdio.h>

    //TORRE - MOVIMENTO EM LINHA RETA HORIZONTAL
    void moverTorre(int passos) {
    if (passos == 0)
        return;

    printf("Direita\n");
    moverTorre(passos - 1);
}
    

    //BISPO - MOVIMENTO DIAGONAL COM RECURSIVIDADE + LOOPS ANINHADOS
    void moverBispo(int passos) {
        if (passos == 0)
    return;


    for (int i = 0; i < 1; i++) { 
        for (int j = 0; j < 1; j++) {
            printf("Diagonal Direita Cima\n");
    }
}

    moverBispo(passos - 1);
}

//RAINHA MOVIMENTO EM LINHA RETA VERTICAL
void moverRainha(int passos) {
    if (passos == 0)
    return;

    printf("Cima\n");
    moverRainha(passos - 1);
}

//FUNÇÃO PRINCIPAL

int main() {
    //TORRE
    printf("\nMovimento Torre:\n\n");
    moverTorre(3);

    //BISPO
    printf("\nMovimento Bispo:\n\n");
    moverBispo(3);

    //RAINHA
    printf("\nMovimento Rainha:\n\n");
    moverRainha(2);

    //CAVALO
    printf("\nMovimento Cavalo:\n\n");

    int passosCima = 2;
    int passosDireita = 1;
    int i, j;

    //LOOP ANINHADO
   for (int i = 0; i < passosCima + 1; i++) {
        if (i < passosCima) {
            printf("Cima\n");
            continue;
        }

        // Quando i == 2 (após duas subidas), faz o movimento para a direita
        for (int j = 0; j < passosDireita; j++) {
            printf("Direita\n");
            break;  // Só um passo para a direita
        }
    }

    return 0;
}
