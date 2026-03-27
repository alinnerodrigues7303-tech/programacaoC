#include <stdio.h>
int main(){
    int resultado1, resultado2;
    int primeiroAtributo, segundoAtributo;

    // CARTA 1:
    char estado1 = 'A';
    char codigoCarta1[] = "A01";
    char nomeCidade1[] = "São Paulo";
    int populacao1 = 788;
    float area1 = 432.5;
    float pib1 = 987.2;
    int pontosTuristicos1 = 50;
    float densidade1 = populacao1 / area1;

    // CARTA 2:
    char estado2 = 'B';
    char codigoCarta2[] = "B02";
    char nomeCidade2[] = "Minas Gerais";
    int populacao2 = 567;
    float area2 = 556.9;
    float pib2 = 120.90;
    int pontosTuristicos2 = 30;
    float densidade2 = populacao2 / area2;
    
// MENU
    printf("Escolha o primeiro atributo: \n");
    printf("1. População.\n");
    printf("2. Área. \n");
    printf("3. PIB. \n");
    printf("4. Pontos turísticos. \n");
    printf("5.Densidade demográfica. \n");
    scanf("%d", &primeiroAtributo);

    switch (primeiroAtributo){
    case 1:
        printf("População.\n");
        populacao1 > populacao2 ? 1: 0;
        break;
    case 2:
        printf("Área.\n");
        area1 > area2 ? 1 : 0 ;
        break;
    case 3:
        printf("PIB.\n");
        pib1 > pib2 ? 1 : 0 ;
        break;
    case 4:
        printf("Pontos turíticos.\n");
        pontosTuristicos1 > pontosTuristicos2 ? 1 : 0;
        break;
    case 5:
        printf("Densidade.\n");
        densidade1 < densidade2 ? 1 : 0;
        break;
    default:
    printf("Opção inválida!\n");
        break;
    }

    printf("Escolha o segundo atributo: \n");
    printf("1. População.\n");
    printf("2. Área. \n");
    printf("3. PIB. \n");
    printf("4. Pontos turísticos. \n");
    printf("5.Densidade demográfica. \n");
    scanf("%d", &segundoAtributo);

    if (primeiroAtributo == segundoAtributo){
        printf("Atributo inválido! Escolha um atributo diferente do primeiro.\n");
    } else {
        switch (segundoAtributo)
        {
    case 1:
        printf("População.\n");
        populacao1 > populacao2 ? 1: 0;
        break;
    case 2:
        printf("Área.\n");
        area1 > area2 ? 1 : 0 ;
        break;
    case 3:
        printf("PIB.\n");
        pib1 > pib2 ? 1 : 0 ;
        break;
    case 4:
        printf("Pontos turíticos.\n");
        pontosTuristicos1 > pontosTuristicos2 ? 1 : 0;
        break;
    case 5:
        printf("Densidade.\n");
        densidade1 < densidade2 ? 1 : 0;
        break;
    default:
    printf("Opção inválida!\n");
        break;
        }
    }

    if (resultado1 && resultado2){
        printf("Parabéns! Você ganhou!\n");
    } else if (resultado1 != resultado2){
        printf("Empatou!");
    } else {
        printf("Você perdeu!\n");
    }
    
    return 0;
}