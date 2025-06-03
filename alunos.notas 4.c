#include <stdio.h>
#include <stdlib.h>

#include "alunos.h"
#include "notas.h"

void cadastrar_nota(Nota *nota, int *conta){
    printf("\n\n-- Cadastrar Nota --\n");
    printf("\nInforme a matrícula do aluno: ");
    scanf("%d", &nota->matricula);
    printf("Informe a nota: ");
    scanf("%f", &nota->nota);
    *conta = *conta + 1;
}