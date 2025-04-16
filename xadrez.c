#include <stdio.h>

// Desafio de Xadrez -
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

    // Nível Novato - Movimentação das Peças
int main() {
    // Movimentação da Torre - 5 casas para a direita
    int casasTorre = 5;
    printf("Movimento da Torre:\n");
    for (int i = 0; i < casasTorre; i++) {
        printf("Direita\n");
    }

    printf("\n");

    // Movimentação do Bispo - 5 casas na diagonal para cima e à direita
    int casasBispo = 5;
    int i = 0;
    printf("Movimento do Bispo:\n");
    while (i < casasBispo) {
        printf("Cima Direita\n");
        i++;
    }

    printf("\n");

    // Movimentação da Rainha - 8 casas para a esquerda
    int casasRainha = 8;
    int j = 0;
    printf("Movimento da Rainha:\n");
    do {
        printf("Esquerda\n");
        j++;
    } while (j < casasRainha);

    return 0;
}
