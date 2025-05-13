#include <stdio.h>

typedef struct { // Estrutura Pessoa definida
    char nome[50];
    int idade;
} Pessoa;

int main() {
    Pessoa pessoa[2];

    for (int i = 0; i < 2; i++) { // Leitura dos dados das duas pessoas
        printf("Digite o nome da pessoa %d:\n", i + 1);
        scanf(" %[^\n]", pessoa[i].nome);

        printf("Digite a idade de %s:\n", pessoa[i].nome);
        scanf("%d", &pessoa[i].idade);
    }

    printf("\n--- Resultado ---\n"); 
    if (pessoa[0].idade > pessoa[1].idade) { // Comparação das idades
        printf("%s é mais velha.\n", pessoa[0].nome);
    } else if (pessoa[1].idade > pessoa[0].idade) {
        printf("%s é mais velha.\n", pessoa[1].nome);
    } else {
        printf("%s e %s têm a mesma idade.\n", pessoa[0].nome, pessoa[1].nome);
    }

    return 0;
}
