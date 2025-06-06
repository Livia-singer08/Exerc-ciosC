#include <stdio.h>

int main() {
    float nota, soma = 0, media;

    printf("=== Cafeteria Café com Letras ===\n\n");

    for (int i = 1; i <= 7; i++) {
        printf("Nota do cliente %d (0 a 10): ", i);
        scanf("%f", &nota);
        soma += nota;
    }

    media = soma / 7.0;

    printf("\nMédia das notas: %.2f\n", media);

    if (media >= 8) {
        printf("Atendimento: Bom\n");
    } else if (media >= 5) {
        printf("Atendimento: Razoável\n");
    } else {
        printf("Atendimento: Ruim\n");
    }
    return 0;
}




