#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char nome[100];
    int ano;
} Livro;

int main() {
    
    Livro livros[8];
    
    printf("=== Livraria Letras Vivas ===\n");

    for (int i = 0; i < 8; i++) {
        printf("\nLivro %d - Nome: ", i + 1);
        scanf(" %[^\n]", livros[i].nome);
        printf("Ano: ");
        scanf("%d", &livros[i].ano);
    }
    
    system("clear");
    printf("Livros publicados antes de 2000:\n");
    for (int i = 0; i < 8; i++) {
        if (livros[i].ano < 2000) {
            printf("%s (%d)\n", livros[i].nome, livros[i].ano);
        }
    }
    return 0;
}


