#include <stdio.h>
#include <string.h>
struct Carro {
    char modelo[15]; 
    char marca[15]; 
    int ano;
    double preco;
};
void listaCarros(struct Carro *carros, int n, double x) {
    printf("\nCarros com preço menor ou igual a %.2lf:\n", x);
    for(int i = 0; i < n; i++) {
        if(carros[i].preco <= x) {
            printf("Modelo: %s\n", carros[i].modelo);
        }
    }
}

int main() {
    struct Carro carros[5] = {
        {"Civic", "Honda", 2020, 90000.00},
        {"Corolla", "Toyota", 2021, 95000.00},
        {"Onix", "Chevrolet", 2019, 55000.00},
        {"Gol", "Volkswagen", 2018, 40000.00},
        {"HB20", "Hyundai", 2022, 78000.00}
    };
    double precoLimite = 80000.00;
    listaCarros(carros, 5, precoLimite);
    return 0;
}