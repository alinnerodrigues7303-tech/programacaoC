#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int opcao, regras;
    int numeroSecreto, palpite;

    printf("Menu principal\n");
    printf("1. Iniciar jogo\n");
    printf("2. Ver regras\n");
    printf("3. Sair\n");
    printf("Escolha uma opção: \n");
    scanf("%d", &opcao);

    switch (opcao){
    case 1:
    srand(time(0));
    numeroSecreto = rand() % 10;
    printf("Digite um número de 0 a 9: \n");
    scanf("%d", &palpite);
    if (numeroSecreto == palpite)
    {
        printf("Você acertou! :D\n");
        printf("Número secreto: %d.\n", numeroSecreto);
    } else {
        printf("Você errou! XD\n");
        printf("Número secreto: %d.\n", numeroSecreto);
    }
        break;
    case 2:
    printf("Explicação das regras! :)\n");
    printf("Digite a opção relacionada as regras do jogo. \n");
    scanf("%d", &regras);
    switch (regras){
    case 1:
    printf("Regra 1\n");
        break;
    case 2:
    printf("Regra 2\n");
        break;
    case 3:
    printf("Regra 3\n");
        break;
    default:
    printf("Opção inválida\n");
        break;
    }
       break;
    case 3:
    printf("Saindo do jogo...\n");
      break;
    default:
    printf("Opção inválida!\n");
        break;
    }

    return 0;

}