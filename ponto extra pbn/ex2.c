#include <stdio.h>

void gerarFibonacci(int n) {
    int primeiro = 0, segundo = 1, seguinte;
    
    printf("Sequência de Fibonacci:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", primeiro);
        seguinte = primeiro + segundo;
        primeiro = segundo;
        segundo = seguinte;
    }
    printf("\n");
}

int main() {
    int n;
    
    printf("Quantos números da sequência de Fibonacci deseja gerar? ");
    scanf("%d", &n);
    
    if (n <= 0) {
        printf("Número inválido!\n");
    } else {
        gerarFibonacci(n);
    }
    
    return 0;
}