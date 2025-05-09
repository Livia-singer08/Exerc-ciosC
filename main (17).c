#include <stdio.h>

int main(){
    int numero[5];
    
    for(int i = 0; i < 5; i++) {
        printf("Digite o %dº número:\n", i + 1);
        scanf("%d", &numero[i]);
    }

    printf("\nNúmeros na ordem inversa:\n");
    for(int i = 4; i >= 0; i--) {
        printf("%d\n", numero[i]);
    }

    return 0;
}
