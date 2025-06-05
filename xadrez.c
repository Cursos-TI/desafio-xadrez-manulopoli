#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.
    int torre, bispo, rainha;
    int i;
    int direita, esquerda, cima;

    // Implementação de Movimentação do Bispo
    // Mover o Bispo 5 casas para direira e para cima
    while (i < 5) {
        printf("Mova o Bispo para a direira\n"); //Para se mover em diagonal precisa andar 5 casas para a direita e 5 casas para cima
        printf("Mova o Bispo para cima\n", i);
        i++; //incremento
    }

    // Implementação de Movimentação da Torre
    // Mover a Torre 5 casas para a direita
    for (i = 0; i < 5; i++) //iniciação, condição, incremento
    { 
        printf("Mova a Torre para a direita\n");
    }

    // Implementação de Movimentação da Rainha
    // Mover a Rainha 8 casas para a esquerda

    do {

        printf("Mova a Rainha para a esquerda\n");
        i++; //incremento
    }
    
    while (i == 8);
    

    return 0;
}
