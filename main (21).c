#include <stdio.h>

typedef struct {
    char modelo[50];
    int ano;
    float preco;
} Carro;

int main(){
    
    Carro carro1 = {"Fusca", 1974, 10000.00};
    
    printf("Modelo: %s\n", carro1.modelo);
    printf("Ano: %d\n", carro1.ano);
    printf("Preço: R$%.2f\n", carro1.preco);
    
    return 0;
}




