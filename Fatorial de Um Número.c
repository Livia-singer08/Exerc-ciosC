#include <stdio.h>

int main() {
    int num, i, fatorial = 1;

    printf("Digite um número inteiro positivo:\n");
    scanf("%d", &num);

    if (num < 0) {
        printf("Fatorial não existe para números negativos.\n");
    } else {
        for (i = 1; i <= num; i++) {
            fatorial *= i;
        }
        printf("O fatorial de %d é: %d\n", num, fatorial);
    }

    return 0;
}