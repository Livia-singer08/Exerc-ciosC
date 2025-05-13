#include <stdio.h>

 int main() {
    int numero[10];
    int maior, menor;

    printf("\n -- Digite 10 números inteiros -- \n");

    for (int i = 0; i < 10; i++) {
        printf("\nDigite o %dº número:\n", i + 1);
        scanf("%d", &numero[i]);

        // Inicializa maior e menor com o primeiro número
        if (i == 0) {
            maior = menor = numero[i];
        } else {
            if (numero[i] > maior)
                maior = numero[i];
            if (numero[i] < menor)
                menor = numero[i];
        }
    }

    printf("\nMaior número: %d\n", maior);
    printf("Menor número: %d\n", menor);

    return 0;
}