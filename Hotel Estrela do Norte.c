#include <stdio.h>

int main() {
    
    int ocupados = 0, status;
    float taxa;

    printf("=== Hotel Estrela do Norte ===\n\n");

    for (int i = 1; i <= 10; i++) {
        do {
            printf("Quarto %d ocupado? (1 = Sim, 0 = Não): ", i);
            scanf("%d", &status);

            if (status != 0 && status != 1) {
                printf("\nValor inválido. Digite 0 ou 1:\n\n");
            }
        } while (status != 0 && status != 1);

        ocupados += status;
    }

    taxa = (ocupados / 10.0) * 100.0;
    printf("\nTaxa de ocupação (em porcentagem): %.2f\n", taxa);

    return 0;
}

