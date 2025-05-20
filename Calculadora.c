#include <stdio.h>

// tipo_funcao nome_funcao(parametros?);


int somar(int v1, int v2);
void somarSemRetorno(int v1, int v2);
int subtrai(int v1, int v2);
float dividir(float v1, float v2);
void multiplica(int v1, int v2);

void media(float v1, float v2);
int menu();


int main (){
    int a, b, opcao;
    
    do{
    
   opcao = menu();
    
    if(opcao == 0){
        printf("\nSaindo..\n");
    }

    scanf("%d %d", &a, &b);
    
    switch(opcao){
        case 1:
        printf("Resultado da SOMA = %d\n", somar(a, b));
        break;
        
        case 2:
        printf("Resultado da SUBTRAÇÂO = %d\n", subtrai(a, b));
        break;
        
        case 3:
        printf("Resultado da DIVISÂO = %.0f\n", dividir(a, b));
        break;
        
        case 4:
        multiplica(a, b);
        break;
        
        case 5:
        media(a, b);
        break;

        default:
        printf("Opção Inválida!\n");
        break;
    }
    } while (opcao != 0);
    
    return 0;
}

int somar(int v1, int v2){
    int res = v1 + v2;
    return res;
}

void somarSemRetorno(int v1, int v2){
    int res = v1 + v2;
    printf("Resultado = %d\n", res);
}

int subtrai(int v1, int v2){
    int res = v1 - v2;
    return res;
}

float dividir(float v1, float v2){
    float res = v1 / v2;
    return res;
}

void multiplica(int v1, int v2){
    int res = v1 * v2;
    printf("Resultado da MULTIPLICAÇÃO = %d\n", res);
}

void media(float v1, float v2){
    float res = (v1 + v2) / 2.0;
    printf("MÉDIA = %.0f\n", res);
}

int menu(){
    int opcao;
    
    printf("1 - SOMA\n");
    printf("2 - SUBTRAÇÂO\n");
    printf("3 - DIVISÂO\n");
    printf("4 - MULTIPLICAÇÃO\n");
    printf("5 - MÉDIA\n");
    printf("0 - SAIR\n");
    printf("Informe a operação: ");
    scanf("%d", &opcao);
    
    return opcao;
}