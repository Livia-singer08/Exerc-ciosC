#include <stdio.h>

int main() {
    int num1, num2;
    int soma, subtracao;
    int opcao;
    
    printf("Insira dois números inteiros:\n");
    scanf("%d %d", &num1, &num2);
    
    do{
    
    printf("\n--- MENU ---\n");
    printf("1 - Somar\n");
    printf("2 - Subtrair\n");
    printf("3 - Sair\n");
    scanf("%d", &opcao);
    
    if(opcao == 1){ // Usado para controlar o que fazer dependendo da opção escolhida
        soma = num1 + num2;
        printf("O resultado da soma é: %d\n", soma);
    } else if(opcao == 2){
        subtracao = num1 - num2;
        printf("O resultado da subtração é: %d\n", subtracao);
    } else if (opcao == 3){
        printf("Saindo...\n");
    } else{
        printf("Opção Inválida!\n");
    }
    
    } while (opcao != 3); // O menu continua aparecendo até que o usuário escolha a opção 3 
    
    return 0;
}    