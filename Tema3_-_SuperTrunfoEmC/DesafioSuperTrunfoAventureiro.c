#include <stdio.h>

int main() {

// CARTA 1
    char estado1 = 'A';
    char codigoCarta1[] = "A01";
    char nomeCidade1[] = "Brasil";
    int populacao1, pontosTuristicos1;
    float area1, pib1;

    float densidade1 = populacao1 / area1;
    float perCapita1 = populacao1 / pib1;

    float superPoder1 = (float)populacao1 + area1 + pib1 + (float)pontosTuristicos1
    + perCapita1 + (1.0f / densidade1);

    printf("Digite o nome do país. \n");
    scanf("%s", &nomeCidade1);
    printf("Digite a população. \n");
    scanf("%d", &populacao1);
    printf("Digite a área. \n");
    scanf("%f", &area1);
    printf("Digite o PIB. \n");
    scanf("%f", &pib1);
    printf("Digite o número de pontos turísticos. \n");
    scanf("%d", &pontosTuristicos1);
    printf("Digite a densidade demográfica.\n");
    scanf("%f", &densidade1);

// CARTA 2
    char estado2 = 'A';
    char codigoCarta2[] = "A01";
    char nomeCidade2[] = "Japão";
    int populacao2, pontosTuristicos2;
    float area2, pib2;

    float densidade2 = populacao2 / area2;
    float perCapita2 = populacao2 / pib2;

    float superPoder2 = (float)populacao2 + area2 + pib2 + (float)pontosTuristicos2
    + perCapita2 + (1.0f / densidade2);

    printf("Digite o nome do país. \n");
    scanf("%s", &nomeCidade2);
    printf("Digite a população. \n");
    scanf("%d", &populacao2);
    printf("Digite a área. \n");
    scanf("%f", &area2);
    printf("Digite o PIB. \n");
    scanf("%f", &pib2);
    printf("Digite o número de pontos turísticos. \n");
    scanf("%d", &pontosTuristicos2);
    printf("Digite a densidade demográfica.\n");
    scanf("%f", &densidade2);

    int opcao;
    printf("Escolha um atributo: \n");
    printf("1. População.\n");
    printf("2. Área. \n");
    printf("3. PIB. \n");
    printf("4. Pontos turísticos. \n");
    printf("5.Densidade demográfica. \n");
    scanf("%d", &opcao);

    switch (opcao){
    case 1:
        printf("Atributo população!\n");
        if (populacao1 > populacao2){
            printf("Carta 1 tem maior população!\n");
        } else if (populacao1 < populacao2){
            printf("Carta 2 tem maior população!\n");
        } else {
            printf("Empate!\n");
        }
        break;
    case 2:
    printf("Atributo área!\n");
    if (area1 > area2){
        printf("Carta 1 tem maior área!\n");
    } else if (area1 < area2){
        printf("Carta 2 tem maior área!\n");
    } else {
        printf("Empate!\n");
    }
       break;
    case 3:
    printf("Atributo PIB!\n");
    if (pib1 > pib2){
        printf("Carta 1 tem maior PIB!\n");
    } else if (pib1 < pib2){
        printf("Carta 2 tem maior PIB!\n");
    } else {
        printf("Empate!\n");
    }
    break;
    case 4:
    printf("Atributo pontos turísticos!\n");
    if (pontosTuristicos1 > pontosTuristicos2){
        printf("Carta 1 tem mais pontos turísticos!\n");
    } else if (pontosTuristicos1 < pontosTuristicos2){
        printf("Carta 2 tem mais pontos turísticos!\n");
    } else {
        printf("Empate!\n");
    }
    break;
    case 5:
    printf("Atributo densidade demógrafica!\n");
    if (densidade1 < densidade2){
        printf("Carta 1 tem menor densidade!\n");
    } else if (densidade1 > densidade2){
        printf("Carta 2 tem menor densidade!\n");
    } else {
        printf("Empate!\n");
    }
    break;
    default:
    printf("Opção inválida!\n");
        break;
    }
    return 0;
}