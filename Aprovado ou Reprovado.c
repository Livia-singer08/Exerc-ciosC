#include <stdio.h>

int main(){
    float nota1, nota2, media;
    
    printf("Informe duas notas:\n");
    scanf("%f %f", &nota1, &nota2);
    
    media = (nota1 + nota2) / 2;
    
    if(media >= 7){ // Estrutura de condição usada para determinar, de acordo com sua média, se está aprovado ou não 
        printf("Aluno Aprovado! Média = %.2f\n", media);
    } else if(media == 6){
        printf("Aluno em Recuperação! Média = %.2f\n", media);
    } else{
        printf("Aluno Reprovado! Média = %.2f\n", media);
    }
    
    return 0;
}