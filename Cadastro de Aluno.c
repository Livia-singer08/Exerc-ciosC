#include <stdio.h>

typedef struct {
    char nome[50];
    int num_matricula;
    float media;
} Aluno; // Definindo o struct Aluno

int main(){

    Aluno aluno; // Criando uma variável
    
    printf("Informe seu nome:\n");
    scanf(" %[^\n]", aluno.nome); // Leitura de nome
    
    printf("Informe seu número de matrícula:\n");
    scanf("%d", &aluno.num_matricula); // Leitura de idade
    
    printf("Informe sua média:\n");
    scanf("%f", &aluno.media); // Leitura de média
    
    printf("\n --- DADOS DO ALUNO ---\n"); // Imprimindo os dados cadastrados
    printf("Nome: %s\n", aluno.nome);
    printf("Número de Matrícula: %d\n", aluno.num_matricula);
    printf("Média: %.2f\n", aluno.media);
    
    return 0;
}