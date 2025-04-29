#include <stdio.h>

int main() {
    int dividendo, quociente, sobra;
    
    printf("Digite o valor em reais: R$ ");
    scanf("%d", &dividendo);
    
    printf("O sistema irá devolver: \n");
    
    quociente = dividendo / 100;
    sobra = valor % 100;
    if (quociente > 0) {
        printf("(%d) R$ 100,00\n", quociente);
    }
    
    quociente = sobra / 50;
    sobra = sobra % 50;
    if (quociente > 0) {
        printf("(%d) R$ 50,00\n", quociente);
    }
    
    quociente = sobra / 20;
    sobra = sobra % 20;
    if (quociente > 0) {
        printf("(%d) R$ 20,00\n", quociente);
    }
    
    quociente = sobra / 10;
    sobra = sobra % 10;
    if (quociente > 0) {
        printf("(%d) R$ 10,00\n", quociente);
    }
    
    quociente = sobra / 5;
    sobra = sobra % 5;
    if (quociente > 0) {
        printf("(%d) R$ 5,00\n", quociente);
    }
    
    return 0;
}