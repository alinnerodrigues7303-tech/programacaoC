#include <stdio.h>

int main() {
    int tabuleiro[10][10] = {0}; // Inicializa tudo com 0

    // CONE (Apontando para baixo)
    // Origem no topo, expande para baixo
    int topoLinha = 0, topoColuna = 4;
    int alturaCone = 3;
    for (int i = 0; i < alturaCone; i++) {
        for (int j = -i; j <= i; j++) {
            int novaColuna = topoColuna + j;
            if (novaColuna >= 0 && novaColuna < 10) {
                tabuleiro[topoLinha + i][novaColuna] = 5; 
            }
        }
    }

    // CRUZ
    // Centro da cruz
    int centroCruzL = 5, centroCruzC = 2;
    for (int k = -1; k <= 1; k++) {
        tabuleiro[centroCruzL + k][centroCruzC] = 5; // Parte vertical
        tabuleiro[centroCruzL][centroCruzC + k] = 5; // Parte horizontal
    }

    // OCTAEDRO (Losango)
    // Centro do losango
    int centroOctaL = 7, centroOctaC = 7;
    int raio = 2; // Tamanho do octaedro
    for (int i = -raio; i <= raio; i++) {
        for (int j = -raio; j <= raio; j++) {
            // A lógica do losango é: a soma das distâncias (i + j) não pode passar do raio
            int dist = (i < 0 ? -i : i) + (j < 0 ? -j : j); 
            if (dist <= raio) {
                tabuleiro[centroOctaL + i][centroOctaC + j] = 5;
            }
        }
    }

    printf("TABULEIRO COM FORMAS GEOMETRICAS\n");
    printf("  A B C D E F G H I J\n");
    for (int i = 0; i < 10; i++) {
        printf("%d ", i);
        for (int j = 0; j < 10; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }
    return 0;
}