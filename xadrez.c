#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Nível Novato - Movimentação das Peças
    int i = 1;
    int peca;

    //Entrada de dados do jogo:
    printf("*** Jogo Xadrez!!! ***:\n");
    printf("1.Mover a Torre\n");
    printf("2.Mover o Bispo\n");
    printf("3.Mover a Rainha\n");
    printf("Escolha uma peça: "); 
    scanf("%d", &peca); 

    // Implementando a Movimentação das Peças
    switch (peca)
    {

    // Implementação de Movimentação da Torre
    case 1:
        printf("Você escolheu a Torre!\n"); 
    // Mover a Torre 5 casas para a direita
    for (i; i <= 5; i++) //iniciação, condição, incremento
    { 
        printf("Mova para a direita\n");
    }
    break;

    case 2:
    printf("Você escolheu o Bispo!\n"); 
    // Mover o Bispo 5 casas para direira e 5 casas para cima
    while (i <= 5) {
        printf("Mova para a direita e para cima\n"); //Para se mover em diagonal precisa andar 5 casas para a direita e 5 casas para cima
        i++; //incremento
    }
    break;

    // Implementação do Movimento da Rainha
    case 3:
    printf("Você escolheu a Rainha!\n"); 
    // Mover a Rainha 8 casas para a esquerda
    do
    {
        printf("Mova para a esquerda\n");
        i++; //incremento
    } while (i <= 8);
    break;
    }
    
    return 0;
}
