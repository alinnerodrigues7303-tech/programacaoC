#include <stdio.h>
int main(){
    
    // Torre se move 5 casas para a direita.
    int torre = 1;
    while (torre <= 5){
        printf("%d casas para a direita. \n", torre);
        torre++;
    }

    // Bispo se move 5 casas na diagonal para cima e à direita.
    int bispo = 1;
    do {
        printf("%d casas para cima à direita. \n", bispo);
        bispo++;
    } while (bispo <= 5);
    
    // Rainha se move 8 casas para a esquerda.
    for (int rainha = 1; rainha <= 8; rainha++){
        printf("%d casas para a esquerda. \n", rainha);
    }
    
        // Cavalo de move duas para cima e uma para a direita.
    for (int cavalo = 0; cavalo < 1; cavalo++){
        for (int cavalo = 0; cavalo < 2; cavalo++){
           printf("Cima.\n");
        }
        printf("Direita.\n");
    }
    
    return 0;
}