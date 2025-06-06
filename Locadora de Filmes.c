#include <stdio.h>

int main() {
    int filmes;
    do {
        printf("Quantos filmes deseja alugar? (Entre 1 e 5): ");
        scanf("%d", &filmes);
    } while (filmes < 1 || filmes > 5);

    printf("Você alugou %d filme(s).\n", filmes);
    return 0;
}