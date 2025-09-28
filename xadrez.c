#include <stdio.h>

/*
    Desafio: Movimentando as Peças do Xadrez
    Objetivo: Simular o movimento de 3 peças (Torre, Bispo e Rainha)
    utilizando estruturas de repetição diferentes.
*/

int main() {
    // Quantidade de casas que cada peça irá se movimentar
    int casasTorre = 5;
    int casasBispo = 5;
    int casasRainha = 8;

    // ===================== TORRE =====================
    // Torre: movimento em linha reta (5 casas para a direita)
    // Estrutura usada: FOR
    printf("Movimento da Torre:\n");
    for (int i = 1; i <= casasTorre; i++) {
        printf("Direita\n");
    }

    printf("\n");

    // ===================== BISPO =====================
    // Bispo: movimento na diagonal (5 casas para cima e direita)
    // Estrutura usada: WHILE
    printf("Movimento do Bispo:\n");
    int i = 1;
    while (i <= casasBispo) {
        printf("Cima, Direita\n");
        i++;
    }

    printf("\n");

    // ===================== RAINHA =====================
    // Rainha: movimento em qualquer direção (8 casas para a esquerda)
    // Estrutura usada: DO-WHILE
    printf("Movimento da Rainha:\n");
    int j = 1;
    do {
        printf("Esquerda\n");
        j++;
    } while (j <= casasRainha);

    return 0;
}
