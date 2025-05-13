#include <stdio.h>
#include <string.h>

typedef struct { // Definindo a estrutura para armazenar dados de um aluno
    char nome[50];
    int idade;
    float nota;
} Aluno;

int main() {
    Aluno alunos[3];

    char nome_busca[50];

    // Cadastro dos 3 alunos
    for (int i = 0; i < 3; i++) {
        printf("Digite o nome do aluno %d:\n", i + 1);
        scanf("%s", alunos[i].nome);  // Leitura do nome
        printf("Digite a idade de %s:\n", alunos[i].nome);
        scanf("%d", &alunos[i].idade);  // Leitura da idade
        printf("Digite a nota de %s:\n", alunos[i].nome);
        scanf("%f", &alunos[i].nota);  // Leitura da nota
        printf("\n");
    }

    printf("Digite o nome do aluno para buscar: ");
    scanf("%s", nome_busca);  // Leitura do nome para busca

    int encontrado = 0;  // Variável para controlar se o aluno foi encontrado
    for (int i = 0; i < 3; i++) {
        if (strcmp(alunos[i].nome, nome_busca) == 0) {
            printf("\nAluno encontrado:\n");
            printf("Nome: %s\n", alunos[i].nome);
            printf("Idade: %d\n", alunos[i].idade);
            printf("Nota: %.2f\n", alunos[i].nota);
            encontrado = 1;  // Aluno encontrado
            break;  // Saímos do laço, pois já encontramos o aluno
        }
    }

    if (!encontrado) {
        printf("Aluno não encontrado.\n");  // Caso o aluno não tenha sido encontrado
    }

    return 0;
}