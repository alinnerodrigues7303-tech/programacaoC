#include <stdio.h>

int main() {
    // Representar o Tabuleiro (10x10 inicializado com 0)
    int tabuleiro[10][10];
    
    // Inicializando o tabuleiro com água (0)
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            tabuleiro[i][j] = 0;
        }
    }

    // Posicionar os Navios
    // Vetores representando os navios (cada um com 3 partes de valor 3)
    int navioHorizontal[3] = {3, 3, 3};
    int navioVertical[3] = {3, 3, 3};
    int navioDiagonal[3] = {3, 3, 3}; // Navio novo na diagonal
    int navioDiagonal2[3] = {3, 3, 3}; // Segundo navio na diagonal.

    // Coordenadas iniciais (definidas no código)
    int linhaH = 2, colunaH = 1; // Navio Horizontal
    int linhaV = 5, colunaV = 8; // Navio Vertical
    int linhaD = 1, colunaD = 6; // Coordenada inicial na diagonal.
    int linhaD2 = 6, colunaD2 = 2; // Coordenada do segundo navio na diagonal

    // Posicionando Navio Horizontal
    // Copia os valores do vetor para a linha da matriz, avançando as colunas
    for (int j = 0; j < 3; j++) {
        tabuleiro[linhaH][colunaH + j] = navioHorizontal[j];
    }

    // Posicionando Navio Vertical
    // Copia os valores do vetor para a coluna da matriz, avançando as linhas
    for (int i = 0; i < 3; i++) {
        tabuleiro[linhaV + i][colunaV] = navioVertical[i];
    }

    // Posicionando Navio Diagonal
    // Copia os valores do vetor para a coluna da matriz, avançando as linhas
    for (int k = 0; k < 3; k++){
        tabuleiro[linhaD + k][colunaD + k] = navioDiagonal[k];
    }

    // Posicionando o segundo Navio Diagonal
    // Copia os valores do vetor para a coluna da matriz, avançando as linhas
    for (int n = 0; n < 3; n++){
        tabuleiro[linhaD2 + n][colunaD2 + n] = navioDiagonal2[n];
    }
    
    // Exibir o Tabuleiro
    printf("TABULEIRO DE BATALHA NAVAL \n");
    // Imprimir o cabeçalho de letras (Colunas)
    printf("  A B C D E F G H I J\n"); 

    for (int i = 0; i < 10; i++) {
        printf("%d ", i, i);
        for (int j = 0; j < 10; j++) {
            // Imprime o valor seguido de um espaço para organizar a grade
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n"); // Quebra de linha ao fim de cada linha da matriz
    }

    return 0;
}