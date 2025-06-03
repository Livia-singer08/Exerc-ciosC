#ifndef NOTAS_H
#define NOTAS_H

typedef struct{
    int matricula;
    float nota;
} Nota;

void cadastrar_nota(Nota *nota, int *conta);
void calcular_media(Aluno alunos[], Nota notas[]);

#endif