#include <stdio.h>

// Definindo a estrutura Aluno
typedef struct {
    char nome[50];
    float nota1, nota2, nota3;
    float media;
} Aluno;

int main() {
    Aluno aluno;

    // Leitura dos dados { nome e três notas para o cálculo da média 
    printf("Digite o nome do aluno:\n");
    scanf(" %[^\n]", aluno.nome);

    printf("Digite a primeira nota:\n");
    scanf("%f", &aluno.nota1);

    printf("Digite a segunda nota:\n");
    scanf("%f", &aluno.nota2);

    printf("Digite a terceira nota:\n");
    scanf("%f", &aluno.nota3);

    aluno.media = (aluno.nota1 + aluno.nota2 + aluno.nota3) / 3.0; // Cálculo da média das três notas

    printf("\n--- Resultado ---\n"); // Exibindo os resultados
    printf("Aluno: %s\n", aluno.nome);
    printf("Média: %.2f\n", aluno.media);

    if (aluno.media >= 7.0) {
        printf("Situação: Aprovado!\n");
    } else {
        printf("Situação: Reprovado!\n");
    }

    return 0;
}