#include <stdio.h>

#include "alunos.h"
#include "notas.h"

int main(){
    
    Aluno alunos[10];
    Nota notas[50];
    
    int opcao;
    int cont_aluno = 0, cont_nota = 0;
    
    do{
    
    printf("\n--- Sistema Escolar ---\n");
    printf("1 - Cadastrar aluno\n");
    printf("2 - Cadastrar nota\n");
    printf("3 - Calcular média\n");
    printf("4 - Sair\n");
    printf("Selecione uma opção: ");
    scanf("%d", &opcao);
    
    switch(opcao){
        
        case 1:
        cadastrar_aluno(&alunos[cont_aluno], &cont_aluno);
        break;
        
        case 2:
        cadastrar_nota(&notas[cont_nota], &cont_nota);
        break;
        
        case 3:
        calcular_media(alunos, notas);
        break;
        
        case 4:
        printf("\nSaindo..");
        break;
        
        default:
        break;
    }
    }while(opcao != 4);
    
    return 0;
}





void calcular_media(Aluno alunos[], Nota notas[]){
    int matricula, qnt_notas = 0;
    float media = 0;
    printf("\nInforme sua matrícula: ");
    scanf("%d", &matricula);
    for(int i = 0; i < 10; i++){
        if(alunos[i].matricula == matricula){
            printf("Nome: %s\n", alunos[i].nome);
            break;
        }
    }
    
    for(int i = 0; i < 50; i++){
        if(notas[i].matricula == matricula){
            media += notas[i].nota;
            qnt_notas++;
        }
    }
    
    printf("Média: %.2f\n", (media / qnt_notas));
}



