#include <stdio.h>

int main() {
    int numero, i;
    
    printf("Digite um número para ver sua tabuada:\n");
    scanf("%d", &numero);
    
    printf("\nTabuada do número %d:\n", numero);
    
    for(int i = 1; i <= 10; i++){ // Usado para repetir a operação de multiplicação do número digitado pelo usuário 
        printf("%d x %d é = %d\n", numero, i, numero * i);
    }
    
    return 0;
    
}    