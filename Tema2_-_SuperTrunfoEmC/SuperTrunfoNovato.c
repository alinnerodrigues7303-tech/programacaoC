#include <stdio.h>

int main() {
    // Estado: uma única letra.
    char estado = 'A';
    // 2. Código da Carta: 3 caracteres + o terminador nulo '\0' = tamanho 4
    // Exemplo: 'A', '0', '1', '\0'
    char codigoCarta[] = "A01";
    // 3. Nome da Cidade: Array de caracteres com tamanho suficiente
    char nomeCidade[] = "São Paulo";
    int populacao = 55000;
    float area = 234.000;
    float pib = 432.000;
    int pontosTuristicos = 50;

    printf("Estado: %c\n", estado);
    printf("Código da Carta: %s\n", codigoCarta);
    printf("Nome da Cidade: %s\n", nomeCidade);
    printf("População: %d\n", populacao);
    printf("Área: %f\n", area);
    printf("PIB: %f\n", pib);
    printf("Pontos turisticos: %d\n", pontosTuristicos);

    return 0;
}
