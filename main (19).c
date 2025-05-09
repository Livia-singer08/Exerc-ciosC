#include <stdio.h>

int main(){
    int numero[10];
    
    int procurado, encontrado = 0;

    for (int i = 0; i < 10; i++) {
        printf("Digite o %dº número inteiro:\n", i + 1);
        scanf("%d", &numero[i]);
    }

    printf("\nDigite um número para procurar no array:\n");
    scanf("%d", &procurado);

    for (int i = 0; i < 10; i++) {
        if (numero[i] == procurado) {
            printf("O número %d foi encontrado na posição (índice) %d.\n", procurado, i);
            encontrado = 1;
            break; 
        }
    }

    if (!encontrado) {
        printf("O número %d não está presente no array.\n", procurado);
    }

    return 0;
}