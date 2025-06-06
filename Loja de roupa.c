#include <stdio.h>
int main() {
    int codigo;
    printf("Digite o código do produto (1 - Camisa, 2 - Calça, 3 - Casaco): ");
    scanf("%d", &codigo);
    switch (codigo) {
        case 1:
            printf("Produto: Camisa - Preço: R$50\n");
            break;
        case 2:
            printf("Produto: Calça - Preço: R$100\n");
            break;
        case 3:
            printf("Produto: Casaco - Preço: R$150\n");
            break;
        default:
            printf("Código inválido!\n");
    }

    return 0;
}