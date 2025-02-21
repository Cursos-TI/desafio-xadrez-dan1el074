#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

void moverTorre(int numeroDeCasas) {
    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.

    for(int i=0; i<numeroDeCasas; i++) {
        printf("Direita\n");
    }
}

void moverBispo(int numeroDeCasas) {
    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.

    while(numeroDeCasas > 0) {
        printf("Cima\n");
        printf("Direita\n");
        numeroDeCasas--;
    }
}

void moverRainha(int numeroDeCasas) {
    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.

    do {
        printf("Esquerda\n");
        numeroDeCasas--;
    } while(numeroDeCasas > 0);
}

int main() {
    int peca;
    int numeroDeCasas;

    printf("---- Movimento de peças no Xadrez ----\n");

    do{
        printf("\n1- Torre (para a direita) \n");
        printf("2- Bispo (diagonal para cima e à direita) \n");
        printf("3- Rainha (para a esquerda) \n");
        printf("\nEscolha qual peça deseja movimentar: ");

        scanf("%d", &peca);
    } while(peca > 3 || peca < 1);

    do{
        printf("Escolha o número de casas: ");
        scanf("%d", &numeroDeCasas);
    } while(numeroDeCasas > 8 || numeroDeCasas < 1);
    
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
    }

    printf("\n");
    return 0;
}
