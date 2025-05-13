#include <stdio.h>

int main(){
    int num1, num2;
    int opcao;
    int soma, subtracao, multiplicacao, divisao;
    
    printf("Digite dois números:\n");
    scanf("%d %d", &num1, &num2);
    
    do{ // Estrutura de repetição (loop) usada para executar um bloco de código pelo menos uma vez
    
    printf("\n--- Calculadora Simples ---\n");
    printf("1 - Soma (+)\n");
    printf("2 - Subtração (-)\n");
    printf("3 - Multiplicação (*)\n");
    printf("4 - Divisão (/)\n");
    printf("5 - Sair\n");
    scanf("%d", &opcao);
    
    switch(opcao){ // Estrutura de controle usada para executar diferentes blocos de código dependendo do valor de uma variável 
        
        case 1: // Soma
        printf("Soma:\n");
        soma = num1 + num2;
        printf("Resultado = %d\n", soma);
        break;
        
        case 2: // Subtração
        printf("Subtração:\n");
        subtracao = num1 - num2;
        printf("Resultado = %d\n", subtracao);
        break;
        
        case 3: // Multiplicação
        printf("Multiplicação:\n");
        multiplicacao = num1 * num2;
        printf("Resultado = %d\n", multiplicacao);
        break;
        
        case 4: // Divisão
        printf("Divisão:\n");
        
        if(num2 == 0){ // Usado para verificar se o número é zero, o que causará erro de execução
            printf("Erro! Divisão por zero\n");
        } else{
        divisao = num1 / num2;
        printf("Resultado = %d\n", divisao);
        }
        break;
        
        case 5: // Sair
        printf("Saindo...\n");
        break;
        
        default:
        printf("\nOpção Inválida! Tente novamente.\n");
        break;
    }
    } while (opcao != 5);
    
    return 0;
}