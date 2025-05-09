#include <stdio.h>

typedef struct {
    char modelo[50];
    int ano;
    float preco;
} Carro;

int main(){

    Carro carro[3];
    
    int i;
    float soma = 0.00;
    
    for(int i = 0; i < 3; i++){
         printf("Digite o modelo do carro:\n");
    scanf(" %[^\n]", carro[i].modelo);
    
    printf("Digite o ano do carro:\n");
    scanf("%d", &carro[i].ano);
    
    printf("Digite o preço do carro:\n");
    scanf("%f", &carro[i].preco);
    
    soma += carro[i].preco;
    }
    
    printf("\n--Dados dos Carros--\n");
    for (int i = 0; i < 3; i++) {
        printf("\nCarro %d\n", i + 1);
        printf("Modelo: %s\n", carro[i].modelo);
        printf("Ano: %d\n", carro[i].ano);
        printf("Preço: R$%.2f\n", carro[i].preco);
    }
    
    printf("\nTotal gasto: R$%.2f\n", soma);

    return 0;
}



