#include <stdio.h>
#include <stdlib.h>

int main(){
    int pratos, sobremesa, bebida;
    float total, desconto = 0, valor;
    
    printf("Digite o valor total de sua conta: ");
    scanf("%f", &total);
    printf("Quantos pratos principais foram pedidos? ");
    scanf("%d", &pratos);
    printf("O cliente pediu sobremesa? (Digite 1 para 'SIM' e 2 para 'NÃO'");
   scanf("%d", &sobremesa);
    printf("O cliente pediu bebida? Digite 1 pra Sim ou 0 pra Não): ");
    scanf("%d", &bebida);
   
    if (pratos > 3) {
        desconto += 0.10;  
    }
    if (sobremesa == 1 && bebida == 1) {
        desconto += 0.05;  
    }
    valor = total * (1 - desconto);
   
    printf("Valor final com desconto: R$ %.2f\n", valor);
   
    return 0;
}