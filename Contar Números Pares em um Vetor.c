#include <stdio.h>

int main() {
    int numeros[10];
    int pares = 0;

    printf(" -- Digite 10 números inteiros --\n");

    for (int i = 0; i < 10; i++) { // Código a ser repetido
        printf("\nDigite o %dº número:\n", i + 1);
        scanf("%d", &numeros[i]);

        if (numeros[i] % 2 == 0) {  // Verifica se o número é par
            pares++;
        }
    }

    printf("\nQuantidade de números pares: %d\n", pares);

    return 0;
}