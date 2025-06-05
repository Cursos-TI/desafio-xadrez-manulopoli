#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

void moverTorre (int casas) {
    if (casas > 0) {
        printf("Mova para a direita\n");
        moverTorre(casas-1);
    }
}

void moverRainha (int casas) {
    if (casas > 0) {
        printf("Mova para a esquerda\n");
        moverRainha(casas-1);
    }
}

int main() {
    // Nível Novato - Movimentação das Peças
    int i = 1;
    int j;
    int peca;
    int movimento = 1; //Movimento em L

    //Entrada de dados do jogo:
    printf("*** Jogo Xadrez!!! ***:\n");
    printf("1.Mover a Torre\n");
    printf("2.Mover o Bispo\n");
    printf("3.Mover a Rainha\n");
    printf("4.Mover o Cavalo\n");
    printf("Escolha uma peça: "); 
    scanf("%d", &peca); 

    // Implementando a Movimentação das Peças
    switch (peca)
    {         
   
    // Implementação de Movimentação da Torre
    case 1:
    printf("Você escolheu a Torre!\n"); 
    // Mover a Torre 5 casas para a direita
        moverTorre (5);    
    break;

    case 2:
    printf("Você escolheu o Bispo!\n"); 
    // Mover o Bispo 5 casas para direira e 5 casas para cima
    
    for (int i = 1; i <= 5; i++) //loop interno
    { 
        for (int j = 1; j <= 1; j++) { //loop externo
            printf("Mova para a direita\n"); // Mover 5 casas para a direita
        }
        printf("Mova para cima\n"); // Mover 5 casas para cima
    }
    break;

    // Implementação do Movimento da Rainha
    case 3:
    printf("Você escolheu a Rainha!\n"); 
    // Mover a Rainha 8 casas para a esquerda
        moverRainha (8);
    break;

    // Implementação do Movimento do Cavalo
    case 4:
    printf("Você escolheu o Cavalo!\n"); 
    // Mover o Cavalo
    for (int i = 0, j = 4; i < j; i++, j--)
    {
        printf("Mova para cima\n"); // Mover 2 casas para cima
    }
    printf("Mova para a direita\n"); // Mover 1 casa para a direita              
    break;
    }
    
    return 0;
}