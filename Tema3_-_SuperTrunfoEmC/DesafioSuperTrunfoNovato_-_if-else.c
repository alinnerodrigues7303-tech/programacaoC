#include <stdio.h>

int main() {
    char estado1 = 'A';
    char codigoCarta1[] = "A01";
    char nomeCidade1[] = "São Paulo";
    int populacao1 = 78895000;
    float area1 = 4325.11;
    float pib1 = 987.28;
    int pontosTuristicos1 = 50;

    float densidade1 = populacao1 / area1;
    float perCapita1 = populacao1 / pib1;

    float superPoder1 = (float)populacao1 + area1 + pib1 + (float)pontosTuristicos1
    + perCapita1 + (1.0f / densidade1);

    printf("t('-'t) CARTA 1\n");
    printf("Estado: %c\n", estado1);
    printf("Código da Carta: %s\n", codigoCarta1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %f\n", area1);
    printf("PIB: %f\n", pib1);
    printf("Pontos turisticos: %d\n", pontosTuristicos1);
    printf("Densidade populacional: %.2f hab/km²\n", densidade1);
    printf("PIB Per Capita: %.2f blhões de reais\n", perCapita1);
    printf("SUPER PODER DA CARTA 1: %.2f\n", superPoder1);

    char estado2 = 'A';
    char codigoCarta2[] = "A01";
    char nomeCidade2[] = "São Paulo";
    int populacao2 = 56784000;
    float area2 = 3314.22;
    float pib2 = 876.17;
    int pontosTuristicos2 = 30;

    float densidade2 = populacao2 / area2;
    float perCapita2 = populacao2 / pib2;

    float superPoder2 = (float)populacao2 + area2 + pib2 + (float)pontosTuristicos2
    + perCapita2 + (1.0f / densidade2);

    printf("t('-'t) CARTA 2\n");
    printf("Estado: %c\n", estado2);
    printf("Código da Carta: %s\n", codigoCarta2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %f\n", area2);
    printf("PIB: %f\n", pib2);
    printf("Pontos turisticos: %d\n", pontosTuristicos2);
    printf("Densidade populacional: %.2f hab/km²\n", densidade2);
    printf("PIB Per Capita: %.2f blhões de reais\n", perCapita2);
    printf("SUPER PODER DA CARTA 2: %.2f\n", superPoder2);

    // Comparação das cartas:
    printf("População1 > População2: %d\n", populacao1 > populacao2);
    printf("População: CARTA 1 venceu!\n");

    printf("Área1 > Área2: %d\n", area1 > area2);
    printf("Área: CARTA 1 venceu!\n");

    printf("PIB1 > PIB2: %d\n", pib1 > pib2);
    printf("PIB: CARTA 1 venceu!\n");

    printf("Pontos Turistícos1 > Pontos turistícos2: %d\n", pontosTuristicos1 > pontosTuristicos2);
    printf("Pontos Turistícos: CARTA 1 venceu!\n");

    printf("Densidade populacional1 < densidade populacional2: %d\n", densidade1 < densidade2);
    printf("Densidade populacional: CARTA 2 venceu!\n");

    printf("PIB per capita1 > PIB per capita2: %d\n", perCapita1 > perCapita2);
    printf("PIB per capita: CARTA 1 venceu!\n");

    printf("SUPER PODER1 > SUPER PODER2: %d\n", superPoder1 > superPoder2);
    printf("SUPER PODER: CARTA 1 venceu!\n");

    if(populacao1 > populacao2){
        printf("População: Carta 1 venceu!\n");
    } else {
        printf("População: Carta 2 venceu!\n");
    }

    if(area1 > area2){
        printf("Área: Carta 1 venceu!\n");
    } else {
        printf("Área: Carta 2 venceu!\n");
    }

    if(pib1 > pib2){
        printf("PIB: Carta 1 venceu!\n");
    } else {
        printf("PIB: Carta 2 venceu!\n");
    }

    if(pontosTuristicos1 > pontosTuristicos2){
        printf("Pontos Turísticos: Carta 1 venceu!\n");
    } else {
        printf("Pontos Turísticos: Carta 2 venceu!\n");
    }

    if(densidade1 < densidade2){
        printf("Densidade Populacional: Carta 1 venceu!\n");
    } else {
        printf("Densidade Populacional: Carta 2 venceu!\n");
    }

    if(perCapita1 > perCapita2){
        printf("PIB per capita: Carta 1 venceu!\n");
    } else {
        printf("PIB per capita: Carta 2 venceu!\n");
    }

    if(superPoder1 > superPoder2){
        printf("Super Poder: Carta 1 venceu!\n");
    } else {
        printf("Super Poder: Carta 2 venceu!\n");
    }

    return 0;
}