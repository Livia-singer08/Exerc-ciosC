#include <stdio.h>

struct Produto {
    char nome[30];
    int quantidade;
    float preco;
};

void calcularValorTotal(struct Produto produtos[], int tamanho) {
    float total = 0;
    for (int i = 0; i < tamanho; i++) {
        total += produtos[i].quantidade * produtos[i].preco;
    }
    printf("Valor total do estoque: R$%.2f\n", total);
}

int main() {
    struct Produto produtos[10] = {
        {"Arroz", 20, 5.50}, {"Feijão", 15, 6.00}, {"Macarrão", 30, 3.00},
        {"Óleo", 10, 8.00}, {"Açúcar", 25, 4.50}, {"Leite", 12, 7.00},
        {"Farinha", 18, 3.50}, {"Sal", 22, 2.00}, {"Café", 9, 12.00}, {"Biscoito", 17, 4.00}
    };

    calcularValorTotal(produtos, 10);
    return 0;
}