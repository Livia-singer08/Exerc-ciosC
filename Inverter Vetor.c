#include <stdio.h>

int main() {
    int vetor[5];

    printf(" -- Digite 5 números inteiros --\n"); // Leitura dos 5 números
    for (int i = 0; i < 5; i++) {
        printf("\nDigite o %dº número:\n", i + 1);
        scanf("%d", &vetor[i]);
    }

    printf("\nVetor invertido:\n"); 
    for (int i = 4; i >= 0; i--) { // Impressão invertida utilizando o "for"
        printf("%d ", vetor[i]);
    }
    printf("\n");

    return 0;
}