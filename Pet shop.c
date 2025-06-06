#include <stdio.h>

struct Animal {
    char tipo[20];
    int idade;
    char nome[20];
};

void exibirAnimaisMaisVelhos(struct Animal animais[], int tamanho) {
    printf("Animais com mais de 5 anos:\n");
    for (int i = 0; i < tamanho; i++) {
        if (animais[i].idade > 5) {
            printf("%s\n", animais[i].nome);
        }
    }
}
int main() {
    struct Animal animais[6] = {
        {"Cachorro", 3, "Rex"},
        {"Gato", 6, "Mimi"},
        {"Papagaio", 8, "Loro"},
        {"Coelho", 2, "Bunny"},
        {"Tartaruga", 10, "Tuga"},
        {"Hamster", 4, "Bolinha"}
    };
    exibirAnimaisMaisVelhos(animais, 6);
    return 0;
}