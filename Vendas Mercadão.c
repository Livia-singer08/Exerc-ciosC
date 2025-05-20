#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char produto[40];
    float valor;
    int quantidade;
} Venda;

int num_vendas = 0;

Venda vendas[10];

// Cadastrar Venda
// Faturamento Total
// Média de Quantidade 

void cadastrar_venda();
void listar_vendas();
void calcular_faturamento();
void media_qnt_vendida();
void finaliza_funcao();

int main() {
    
    int opcao;
    
    do{
    
    printf("--- Mercadão SENAI ---\n");
    printf("1 - Registrar Venda\n");
    printf("2 - Relatório de Vendas\n");
    printf("3 - Calcular Faturamento\n");
    printf("4 - Média da Quantidade Vendida\n");
    printf("5 - Sair\n");
    printf("Selecione uma opcão: ");
    scanf("%d", &opcao); 
    
    
    switch(opcao){
        
        case 1:
        cadastrar_venda();
        break;
        
        case 2:
        listar_vendas();
        break;
        
        case 3:
        calcular_faturamento();
        break;
        
        case 4:
        media_qnt_vendida();
        break;
        
        case 5:
        printf("\nSaindo..\n");
        break;
        
        default:
        printf("\nOpção Inválida! Tente Novamente:\n\n");
        break;
    }
    
    } while (opcao != 5);
    
    return 0;
}

void cadastrar_venda(){
    system("clear");
    printf("--- Nova Venda ---\n\n");
    printf("Produto: ");
    scanf("%s", vendas[num_vendas].produto);
    printf("Valor Unitário: ");
    scanf("%f", &vendas[num_vendas].valor);
    printf("Quantidade: ");
    scanf("%d", &vendas[num_vendas].quantidade);
    num_vendas++;
    finaliza_funcao();
}

void listar_vendas(){
    system("clear");
    printf("--- Minhas Vendas ---\n\n");
    for(int i = 0; i < num_vendas; i++){
        printf("Número da Venda: %d\n", i + 1);
        printf("Produto: %s\n", vendas[i].produto);
        printf("Valor Unitário: R$ %.2f\n", vendas[i].valor);
        printf("Quantidade: %d\n", vendas[i].quantidade);
        printf("----------------------------\n");
    }
    finaliza_funcao();
}

void calcular_faturamento(){
    system("clear");
    printf("--- Meu Faturamento ---\n\n");
    float faturamento = 0;
    for(int i = 0; i < num_vendas; i++){
        faturamento += (vendas[i].valor * vendas[i].quantidade);
        printf("Faturamento: R$ %.2f\n", faturamento);
        printf("----------------------------\n");
    }
    finaliza_funcao();
}

void media_qnt_vendida(){
    system("clear");
    printf("--- Média da Quantidade Vendida ---\n\n");
    float media = 0;
    int contagem = 0;
    for(int i = 0; i < num_vendas; i++){
        contagem += vendas[i].quantidade;
    }
    media = contagem / num_vendas;
    printf("Média da Quantidade: %.2f\n", media);
    finaliza_funcao();
}

void finaliza_funcao(){
    printf("\nEnter para continuar..\n");
    getchar();
    getchar();
    system("clear");
}