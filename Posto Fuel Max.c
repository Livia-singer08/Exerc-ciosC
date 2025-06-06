#include <stdio.h>
#include <stdlib.h>

int main(){
    
    int tipo_combustivel;
    float litros, preco_litro;
    float total;
    
    printf("=== Posto FuelMax ===\n");
    printf("1 - Gasolina (R$6,27 por litro)\n");
    printf("2 - Etanol (R$ 4,13 por litro)\n");
    printf("3 - Diesel (R$ 6,06 por litro)\n");
    printf("0 - Sair\n");
    printf("Escolha o tipo de combustível: ");
    scanf("%d", &tipo_combustivel);
    
    printf("\nDigite a quantidade litros desejada: ");
    scanf("%f", &litros);
    
    switch(tipo_combustivel){
        
        case 1:
        preco_litro = 6.27;
        break;
        
        case 2:
        preco_litro = 4.13;
        break;
        
        case 3:
        preco_litro = 6.06;
        break;
        
        case 0:
        printf("Saindo...\n");
        break;
        
        default:
        printf("Opção Inválida! Tente novamente.\n");
        break;
    }
    
    total = preco_litro * litros;
    printf("\nTotal a pagar: R$ %.2f\n", total);
    
    return 0;
}