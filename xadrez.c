#include <stdio.h>

/*
    Desafio: Movimentando as Peças do Xadrez (Nível Novato + Nível Aventureiro)
    Peças: Torre, Bispo, Rainha e Cavalo.
    - Torre: 5 casas para a direita (for)
    - Bispo: 5 casas na diagonal (while)
    - Rainha: 8 casas para a esquerda (do-while)
    - Cavalo: movimento em "L" (2 casas para baixo e 1 para esquerda) com loops aninhados
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

    printf("\n");

    // ===================== CAVALO =====================
    // Cavalo: movimento em "L" (2 casas para baixo e 1 para esquerda)
    // Estruturas usadas: FOR + WHILE (loops aninhados)
    printf("Movimento do Cavalo:\n");
    int movimentosBaixo = 2;
    int movimentosEsquerda = 1;

    // Loop FOR para controlar os dois blocos do movimento (vertical e horizontal)
    for (int etapa = 1; etapa <= 2; etapa++) {
        if (etapa == 1) {
            // Movimento para baixo (2 casas)
            int contador = 1;
            while (contador <= movimentosBaixo) {
                printf("Baixo\n");
                contador++;
            }
        } else {
            // Movimento para a esquerda (1 casa)
            int contador = 1;
            while (contador <= movimentosEsquerda) {
                printf("Esquerda\n");
                contador++;
            }
        }
    }

    return 0;
}
