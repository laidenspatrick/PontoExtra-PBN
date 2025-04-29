#include <stdio.h>

void bubbleSort(int *vetor, int tamanho) {
    int i, j, temp;
    for (i = 0; i < tamanho - 1; i++) {
        for (j = 0; j < tamanho - i - 1; j++) {
            if (*(vetor + j) > *(vetor + j + 1)) {
                temp = *(vetor + j);
                *(vetor + j) = *(vetor + j + 1);
                *(vetor + j + 1) = temp;
            }
        }
    }
}

int main() {
    int vetor[10] = {4, 32, 21, 45, 11, 2, 15, 53, 81, 8};
    int k;
    int tamanho_vetor = sizeof(vetor) / sizeof(vetor[0]);
    
    printf("Vetor original: ");
    for (k = 0; k < tamanho_vetor; k++) {
        printf("%d ", vetor[k]);
    }
    printf("\n");
    
    bubbleSort(vetor, tamanho_vetor);
    
    printf("Vetor ordenado: ");
    for (k = 0; k < tamanho_vetor; k++) {
        printf("%d ", vetor[k]);
    }
    printf("\n");
    
    return 0;
}