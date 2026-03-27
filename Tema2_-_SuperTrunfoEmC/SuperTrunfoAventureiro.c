#include <stdio.h>

int main() {
    char estado = 'A';
    char codigoCarta[] = "A01";
    char nomeCidade[] = "São Paulo";
    int populacao = 78895000;
    float area = 4325.11;
    float pib = 987.28;
    int pontosTuristicos = 50;

    float densidade = populacao / area;

    float perCapita = populacao / pib;

    printf("Estado: %c\n", estado);
    printf("Código da Carta: %s\n", codigoCarta);
    printf("Nome da Cidade: %s\n", nomeCidade);
    printf("População: %d\n", populacao);
    printf("Área: %f\n", area);
    printf("PIB: %f\n", pib);
    printf("Pontos turisticos: %d\n", pontosTuristicos);
    printf("Densidade populacional: %.2f hab/km²\n", densidade);
    printf("PIB Per Capita: %f blhões de reais\n", perCapita);

return 0;

}