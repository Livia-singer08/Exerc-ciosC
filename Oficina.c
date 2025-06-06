#include <stdio.h>

struct Carro {
    char marca[20];
    int ano;
    int quilometragem;
};

void listarCarrosRodados(struct Carro carros[], int tamanho) {
    printf("Carros com mais de 100.000 km rodados:\n");
    for (int i = 0; i < tamanho; i++) {
        if (carros[i].quilometragem > 100000) {
            printf("%s - Ano: %d - KM: %d\n", carros[i].marca, carros[i].ano, carros[i].quilometragem);
        }
    }
}

int main() {
    struct Carro carros[5] = {
        {"Toyota", 2015, 120000}, {"Honda", 2018, 95000}, {"Ford", 2012, 135000},
        {"Chevrolet", 2020, 80000}, {"Volkswagen", 2010, 140000}
    };

    listarCarrosRodados(carros, 5);
    return 0;
}