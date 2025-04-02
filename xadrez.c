#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

void moverTorre(int numeroDeCasas) {
    // Implementação de Movimentação da Torre
    if(numeroDeCasas > 0) {
        printf("Direita\n");
        moverTorre(--numeroDeCasas);
    }
}

void moverBispo(int numeroDeCasas) {
    // Implementação de Movimentação do Bispo
    if(numeroDeCasas >  0) {
        int movimentoEmL = 1;

        while(movimentoEmL--) {
            printf("Cima\n");
            
            for(int i=0; i<1; i++) {
                printf("Direita\n");
            }
        }

        moverBispo(--numeroDeCasas);
    }
}

void moverRainha(int numeroDeCasas) {
    // Implementação de Movimentação da Rainha
    if(numeroDeCasas > 0) {
        printf("Esquerda\n");
        moverRainha(--numeroDeCasas);
    }
}

void moverCavalo() {
    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.

    int movimentoHorizontal = 1;

    while(movimentoHorizontal--) {
        for(int i=0, j=4; i<j; i++, j--) {
            printf("Cima\n");
        }
        printf("Direita\n");
    }
}

int main() {
    int peca;
    int numeroDeCasas;

    printf("---- Movimento de peças no Xadrez ----\n");

    do{
        printf("\n1- Torre (para a direita) \n");
        printf("2- Bispo (diagonal para cima e à direita) \n");
        printf("3- Rainha (para a esquerda) \n");
        printf("4- Cavalo (para a baixo e esquerda) \n");
        printf("\nEscolha qual peça deseja movimentar: ");

        scanf("%d", &peca);
    } while(peca > 4 || peca < 1);

    if(peca != 4) {
        do{
            printf("Escolha o número de casas: ");
            scanf("%d", &numeroDeCasas);
        } while(numeroDeCasas > 8 || numeroDeCasas < 1);
    }
    
    printf("\n");

    switch(peca) {
        case 1:
            moverTorre(numeroDeCasas);
            break;
        case 2:
            moverBispo(numeroDeCasas);
            break;
        case 3:
            moverRainha(numeroDeCasas);
            break;
        case 4:
            moverCavalo();
            break;
    }

    printf("\n");
    return 0;
}
