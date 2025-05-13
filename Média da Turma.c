#include <stdio.h>

int main() {
    char nome[50];
    float media, soma = 0.0;
    int i;

    for (i = 1; i <= 5; i++) { // Loop
        printf("Digite o nome do aluno %d:\n", i);
        scanf(" %[^\n]", nome);  // Lê nome com espaços

        printf("Digite a média final de %s:\n", nome);
        scanf("%f", &media);

        soma += media;
    }

    printf("\nMédia geral da turma: %.2f\n", soma / 5); // Cálculo da média geral entre os alunos

    return 0;
}