#include <stdio.h>
#include <stdlib.h>

int main(){
    
    float ingresso = 0, pontos;
    int sair;
    
    do{
        printf("=== CinePonto ===\n");
        printf("1 - Comprar Ingresso\n");
        printf("2 - Cadastrar Ingressso\n");
        printf("3 - Pontos Acumulados\n");
        printf("0 - Sair\n");
        scanf("%d", &sair);
        
        switch(sair){
            
            case 1:
            printf("Digite a quantidade de ingressos que deseja comprar: ");
            scanf("%f", &pontos);
            if(pontos >= 1){
                ingresso += pontos;
                printf("Pontos Registrados com sucesso!\n\n");
            } else{
                printf("Erro! A quantidade de ingressos deve ser acima de 1.\n");
            }
            break;
            
            case 2:
            printf("Digite a quantidade de ingressos que deseja cadastrar: ");
            scanf("%f", &pontos);
            if(pontos >= 1){
                if(pontos >= ingresso){
                    ingresso += pontos;
                    printf("Ingresso cadastrado com sucesso!\n\n");
                }
            } else{
                printf("Erro! A quantidade de ingressos deve ser acima de 1.\n");
            }
            break;
            
            case 3:
            printf("A soma dos seus pontos: %.2f\n", ingresso);
            break;
            
            case 0:
            printf("Saindo...\n");
            break;
            
            default:
            printf("Opção inválida! Tente novamente.");
            break;
        }   
        } while(sair != 0);
        
    return 0;
}