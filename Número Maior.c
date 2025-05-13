#include <stdio.h>

int main(){
    int num1, num2;
    
    printf("Digite dois números:\n");
    scanf("%d %d", &num1, &num2);
    
    if(num1 > num2){ // Estrutura de condição para determinar qual número é maior
        printf("%d é maior que %d\n", num1, num2);
    } else{
        printf("%d é maior que %d\n", num2, num1);
    }
    
    return 0;
}