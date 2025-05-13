#include <stdio.h>

int main(){
    int idade;
    
    printf("Insira sua idade:\n");
    scanf("%d", &idade);
    
    if(idade <= 16){ // Estrutura de condição para determinar, de acordo com a idade, a categoria eleitoral
        printf("Não vota!\n");
    } else if(idade >= 16 && idade < 18 || idade >= 70){
        printf("Voto facultativo!\n");
    } else{
        printf("Voto obrigatório!\n");
    }
    
    return 0;
}