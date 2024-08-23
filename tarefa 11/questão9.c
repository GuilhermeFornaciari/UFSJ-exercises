#include <stdio.h>
#include <string.h>
typedef struct Filme {
    char titulo[100];
    int duracao;
    int ano;
} Filme;
void lista_filmes(struct Filme filmes[], int n) {
    printf("\nLista de todos os filmes:\n");
    for (int i = 0; i < n; i++) {
        printf("Título: %s, Duração: %d min, Ano: %d\n", filmes[i].titulo, filmes[i].duracao, filmes[i].ano);
    }
}
void lista_filmes_ano(struct Filme filmes[], int n, int ano) {
    int encontrado = 0;
    printf("\nFilmes produzidos no ano %d:\n", ano);
    for (int i = 0; i < n; i++) {
        if (filmes[i].ano == ano) {
            printf("Título: %s, Duração: %d min, Ano: %d\n", filmes[i].titulo, filmes[i].duracao, filmes[i].ano);
            encontrado = 1;
        }
    }
    if (!encontrado) {
        printf("Nenhum filme encontrado para o ano %d.\n", ano);
    }
}
void lista_filmes_duracao(struct Filme filmes[], int n, int duracao) {
    int encontrado = 0;
    printf("\nFilmes com duração menor que %d minutos:\n", duracao);
    for (int i = 0; i < n; i++) {
        if (filmes[i].duracao < duracao) {
            printf("Título: %s, Duração: %d min, Ano: %d\n", filmes[i].titulo, filmes[i].duracao, filmes[i].ano);
            encontrado = 1;
        }
    }
    if (!encontrado) {
        printf("Nenhum filme encontrado com duração menor que %d minutos.\n", duracao);
    }
}

int main() {
    Filme filmes[] = {
        {"O Senhor dos Aneis: A Sociedade do Anel", 178, 2001},
        {"O Senhor dos Aneis: As Duas Torres", 179, 2001},
        {"O Senhor dos Aneis: O Retorno do Rei", 201, 2001},
        {"Interestelar", 169, 2014},
        {"Inception", 148, 2010},
        {"Parasita", 132, 2019},
        {"Matrix", 136, 1999},
        {"O Poderoso Chefão", 175, 1972}
    };
    lista_filmes(filmes, 8);
    int ano;
    printf("\nDigite o ano para listar os filmes: ");
    scanf("%d", &ano);
    lista_filmes_ano(filmes, 8, ano);
    int duracao;
    printf("\nDigite a duração máxima em minutos para listar os filmes: ");
    scanf("%d", &duracao);
    lista_filmes_duracao(filmes, 8, duracao);
    return 0;
}
