#include <stdio.h>

typedef struct { // Definindo a estrutura de Produto
    char nome[50];
    float preco;
    int quantidade;
} Produto;

int main() {
    Produto produtos[5];
    
        for (int i = 0; i < 5; i++) { // Cadastro dos produtos -> Lê nome, preço e quantidade
        printf("Produto %d:\n", i + 1);

        printf("Nome: ");
        scanf(" %[^\n]", produtos[i].nome);

        printf("Preço: ");
        scanf("%f", &produtos[i].preco);

        printf("Quantidade: ");
        scanf("%d", &produtos[i].quantidade);
    }

    printf("\n--- Total por Produto ---\n"); // Impressão do total de cada produto com "for" -> código a ser repetido
    for (int i = 0; i < 5; i++) {
        float total = produtos[i].preco * produtos[i].quantidade;
        printf("Produto: %s\n", produtos[i].nome);
        printf("Total (preço x quantidade): R$ %.2f\n", total);
        printf("\n");
    }

    return 0;
}