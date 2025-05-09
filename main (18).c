#include <stdio.h>

int main(){
    float nota[6];
    float soma = 0.0, media;
    
    for(int i = 0; i < 6; i++) {
        printf("Digite o %dª nota:\n", i + 1);
        scanf("%f", &nota[i]);
        soma += nota[i];
    }

   media = soma / 6;

    printf("\nMédia das notas: %.2f\n", media);

    printf("Notas acima da média:\n");
    for(int i = 0; i < 6; i++) {
        if(nota[i] > media) {
            printf("Nota %d: %.2f\n", i + 1, nota[i]);
        }
    }

    return 0;
}