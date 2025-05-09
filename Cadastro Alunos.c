#include <stdio.h>

typedef struct {
    char nome[50];
    int num_matricula;
    float media;
} Aluno;

int main(){

    Aluno aluno[3];
    
    int i, opcao;
    
    for(int i = 0; i < 3; i++){
         printf("Informe seu nome:\n");
    scanf(" %[^\n]", aluno[i].nome);
    
    printf("Informe seu número de matrícula:\n");
    scanf("%d", &aluno[i].num_matricula);
    
    printf("Informe sua média:\n");
    scanf("%f", &aluno[i].media);
    }
    
    do{
    printf("\n--- MENU ---\n");
    printf("1 - Listar todos os alunos\n");
    printf("2 - Mostrar aluno com maior média\n");
    printf("3 - Buscar aluno por matrícula\n");
    printf("4 - Sair\n");
    scanf("%d", &opcao);
    
    switch(opcao){
        
        case 1:
        for(int i = 0; i < 3; i++){
            printf("Nome: %s\n", aluno[i].nome);
            printf("Número de Matrícula: %d\n", aluno[i].num_matricula);
            printf("Média: %.2f\n", aluno[i].media);
        }
        break;
        
        case 2:
        int maior_media = 0;
        
        for(int i = 1; i < 3; i++){
            if(aluno[i].media > aluno[maior_media].media){
                maior_media = i;
            }
        }
        
        printf("\nAluno com maior média:\n");
        printf("Nome: %s\n", aluno[maior_media].nome);
        printf("Número de Matrícula: %d\n", aluno[maior_media].num_matricula);
        printf("Média: %.2f\n", aluno[maior_media].media);
        break;
        
        case 3:
        int busca_matricula, encontrado = 0;
        
        printf("Digite o número de matrícula a ser procurado:\n");
        scanf("%d", &busca_matricula);
        
        for(int i = 0; i < 3; i++){
            if(aluno[i].num_matricula == busca_matricula) {
                printf("Aluno encontrado:\n");
                printf("Aluno: %s\n", aluno[i].nome);
                printf("Média: %.2f\n", aluno[i].media);
                encontrado = 1;
                break;
            }
        }
        
        if(!encontrado){
            printf("Aluno não encontrado! Tente novamente com outro número.\n");
        }
        break;
        
        case 4:
        printf("Saindo...\n");
        break;
        
        default:
        printf("Opção Inválida! Tente novamente!\n");
    }  
    } while(opcao != 4);
    
    return 0;
}