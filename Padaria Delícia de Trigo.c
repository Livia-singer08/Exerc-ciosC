#include <stdio.h>

typedef struct{
    char nome[30];
    int codigo;
    float preco;
}Produto;

int main() {
    Produto produtos[5];

    for (int i = 0; i < 5; i++) {
        system("clear");
        printf("=== Padaria Delícia de Trigo ===\n\n");
        printf("Produto %d:\n", i + 1);
        printf("Nome: ");
        scanf(" %[^\n]", produtos[i].nome);
        printf("Código: ");
        scanf("%d", &produtos[i].codigo);
        printf("Preço: ");
        scanf("%f", &produtos[i].preco);
    }

    printf("\nProdutos com preço superior a R$ 10.00:\n");
    for (int i = 0; i < 5; i++) {
        if (produtos[i].preco > 10) {
            printf("%s - Código: %d - Preço: R$ %.2f\n", produtos[i].nome, produtos[i].codigo, produtos[i].preco);
        }
    }
    return 0;
}
