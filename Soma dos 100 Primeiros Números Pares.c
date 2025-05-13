#include <stdio.h>

int main(){
    int soma = 0;
    
    for (int i = 2; i <= 200; i += 2) { // Usado para percorrer todos os números pares de 2 a 200 e somá-los
        soma += i;
    }

    printf("A soma de todos os números pares de 1 a 200 é: %d\n", soma);
    
    return 0;
}