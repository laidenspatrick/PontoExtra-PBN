#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void gerarNumerosMegaSena() {
    int numeros[6];
    int i, j, repetido;
    
    srand(time(NULL));
    
    for (i = 0; i < 6; i++) {
        do {
            repetido = 0;
            numeros[i] = (rand() % 60) + 1;
            
            for (j = 0; j < i; j++) {
                if (numeros[i] == numeros[j]) {
                    repetido = 1;
                    break;
                }
            }
        } while (repetido);
    }
    
    printf("Números da Mega Sena: ");
    for (i = 0; i < 6; i++) {
        printf("%d ", numeros[i]);
    }
    printf("\n");
}

int main() {
    gerarNumerosMegaSena();
    return 0;
}