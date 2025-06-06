#include <stdio.h>

int main() {
    float precos[10];
    int indice_caro = 0, indice_barato = 0;

    for (int i = 0; i < 10; i++) {
        system("clear");
        printf("=== Loja de Eletrônicos TechBarato ===\n");
        printf("Digite o preço do produto %d: R$ ", i + 1);
        scanf("%f", &precos[i]);
    }

    for (int i = 1; i < 10; i++) {
        if (precos[i] > precos[indice_caro]) {
            indice_caro = i;
        }
        if (precos[i] < precos[indice_barato]) {
            indice_barato = i;
        }
    }

    printf("\nProduto mais caro: Produto %d - R$ %.2f\n", indice_barato + 1, precos[indice_caro]);
    printf("Produto mais barato: Produto %d - R$ %.2f\n", indice_barato + 1, precos[indice_barato]);

    return 0;
}