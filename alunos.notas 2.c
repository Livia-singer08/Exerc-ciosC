#include <stdio.h>
#include <stdlib.h>

#include "alunos.h"

void cadastrar_aluno(Aluno *aluno, int *conta){
    printf("\n\n-- Cadastrar Aluno --\n");
    printf("\nInforme a matrícula: ");
    scanf("%d", &aluno->matricula);
    printf("Informe o nome: ");
    scanf(" %[^\n]", aluno->nome);
    *conta = *conta + 1;
}