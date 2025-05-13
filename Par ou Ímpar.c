#include <stdio.h>

int main(){
    int num;
    
    printf("Digite um número:\n");
    scanf("%d", &num);
    
    if(num % 2 == 0){ // Usado para dar uma estrutura de condição (ser par ou ímpar)
        printf("O número é par!\n");
    } else {
        printf("O número é ímpar!\n");
    }
    
    return 0;
}