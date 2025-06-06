#include <stdio.h>

typedef struct {
	char nome[50];
	int idade;
	float imc;
} Aluno;

void classificar_imc(Aluno aluno);

int main() {
    
	Aluno aluno;
	
	printf("=== Academia Corpo em Movimento ===\n");

	printf("\nNome: ");
	scanf(" %[^\n]", aluno.nome);
	printf("Idade: ");
	scanf("%d", &aluno.idade);
	printf("IMC: ");
	scanf("%f", &aluno.imc);

	classificar_imc(aluno);

	return 0;
}

void classificar_imc(Aluno aluno) {
    if (aluno.imc > 30) {
        printf("%s está obeso!\n", aluno.nome);
    } else if (aluno.imc >= 25) {
        printf("%s está com sobrepeso!\n", aluno.nome);
    } else {
        printf("%s está saudável!\n", aluno.nome);
    }
}