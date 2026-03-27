#include <stdio.h>

// Torre 5 casas à direita.
void torre(int casas){
    if (casas > 0){
        printf("Torre para a direita.\n");
        torre(casas - 1);
    }
    
}

 // Bispo se move 5 casas na diagonal para cima e à direita.
 void bispo(int casas){
    if (casas > 0){
        printf("Bispo para a diagonal.\n");
        bispo(casas - 1);
    }
    
}

// Rainha se move 8 casas para a esquerda.
 void rainha(int casas){
    if (casas > 0){
        printf("Rainha para a esquerda.\n");
        rainha(casas - 1);
    }
    
}
// Cavalo de move duas para cima e uma para a direita.
 void cavalo(int casas){
    if (casas > 0){
        printf("Cavalo para cima.\n");
        cavalo(casas - 1);
    }
    
}

int main(){
    torre(5);
    bispo(5);
    rainha(8);
    cavalo(2);
    printf("Cavalo para a direita.\n",cavalo);

    return 0;
}