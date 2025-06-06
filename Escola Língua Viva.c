#include <stdio.h>
int main() {
    float notas[5][4]; 
    float media[5];  
    int i, j;
    for (i = 0; i < 5; i++) {
        float soma = 0;
        printf("Digite as 4 notas do aluno %d:\n", i + 1);
        
        for (j = 0; j < 4; j++) {
            printf("Nota %d: ", j + 1);
            scanf("%f", &notas[i][j]);
            soma += notas[i][j]; 
        }

        media[i] = soma / 4; 
    }

    printf("\nResultados:\n");
    for (i = 0; i < 5; i++) {
        printf("Aluno %d - Média: %.2f ", i + 1, media[i]);
        
        if (media[i] >= 6) {
            printf("(Aprovado)\n");
        } else {
            printf("(Reprovado)\n");
        }
    }

    return 0;
}