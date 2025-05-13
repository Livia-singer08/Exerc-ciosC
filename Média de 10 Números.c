#include <stdio.h>

int main(){
    
    int numero[10]; // Vetor usado para armazenar os 10 números
    int soma = 0;
    
    printf("-- Digite 10 números inteiros --\n");

    for (int i = 0; i < 10; i++) {
        printf("\nDigite o %dº número:\n", i + 1);
        scanf("%d", &numero[i]);
        soma += numero[i]; // Soma dos valores digitados pelo usuário
    }

    int media = soma / 10; // Calcula a média
    
    printf("\nMédia dos números: %.d\n", media);

    return 0;
}