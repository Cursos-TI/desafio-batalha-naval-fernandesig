#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Nível Novato - Posicionamento dos Navios
    int tabuleiro[10][10];

    char tabela[10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};

    int navioHori[3]; // navio horizontal
    int navioVert[3];     // navio vertical

    // Preenchendo tabuleiro
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            tabuleiro[i][j] = 0;
        }
    }

    // navio horizontal
    int linhaHori = 1;
    int colunaHori = 2;

    // verificação limites
    if (colunaHori + 3 > 10) {
        printf("Erro: navio vermelho ultrapassa o limite do tabuleiro.\n");
        return 1;
    }

    // posicionando navio horizontal
    for (int i = 0; i < 3; i++) {
        if (tabuleiro[linhaHori][colunaHori + i] == 3) {
            printf("Erro: navio vermelho sobreposto a outro navio.\n");
            return 1;
        }

        tabuleiro[linhaHori][colunaHori + i] = 3;
        navioHori[i] = colunaHori + i;
    }

    // navio vertical
    int linhaVert = 5;
    int colunaVert = 5;

    // limite tabuleiro
    if (linhaVert + 3 > 10) {
        printf("Erro: navio azul ultrapassa o limite do tabuleiro.\n");
        return 1;
    }

    // posicao navio vertical
    for (int i = 0; i < 3; i++) {
        if (tabuleiro[linhaVert + i][colunaVert] == 3) {
            printf("Erro: navio azul sobreposto a outro navio.\n");
            return 1;
        }

        tabuleiro[linhaVert + i][colunaVert] = 3;
        navioVert[i] = linhaVert + i;
    }

    //tabuleiro
    printf("\nTabuleiro Batalha Naval:\n\n");

    // Cabeçalho 
    printf("    ");
    for (int i = 0; i < 10; i++) {
        printf(" %c ", tabela[i]);
    }
    printf("\n");

    // linhas
    for (int i = 0; i < 10; i++) {
        printf("%d ", i + 1); // Número da linha (1 a 10)
        for (int j = 0; j < 10; j++) {
            printf(" %d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}

    // Nível Aventureiro - Expansão do Tabuleiro e Posicionamento Diagonal
    // Sugestão: Expanda o tabuleiro para uma matriz 10x10.
    // Sugestão: Posicione quatro navios no tabuleiro, incluindo dois na diagonal.
    // Sugestão: Exiba o tabuleiro completo no console, mostrando 0 para posições vazias e 3 para posições ocupadas.

    // Nível Mestre - Habilidades Especiais com Matrizes
    // Sugestão: Crie matrizes para representar habilidades especiais como cone, cruz, e octaedro.
    // Sugestão: Utilize estruturas de repetição aninhadas para preencher as áreas afetadas por essas habilidades no tabuleiro.
    // Sugestão: Exiba o tabuleiro com as áreas afetadas, utilizando 0 para áreas não afetadas e 1 para áreas atingidas.

    // Exemplos de exibição das habilidades:
    // Exemplo para habilidade em cone:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 1 1 1 1 1
    
    // Exemplo para habilidade em octaedro:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 0 0 1 0 0

    // Exemplo para habilidade em cruz:
    // 0 0 1 0 0
    // 1 1 1 1 1
    // 0 0 1 0 0

  
