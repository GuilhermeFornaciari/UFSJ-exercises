#include <stdio.h>
#include <string.h>
struct livro {
    char titulo[30];
    char autor[15]; 
    int ano;
};
void procura_livro(struct livro *v, int n, char *autor) {
    int encontrado = 0;
    printf("Livros do autor %s:\n", autor);
    for (int i = 0; i < n; i++) {
        if (strcmp(v[i].autor, autor) == 0) {
            printf("Título: %s\n", v[i].titulo);
            encontrado = 1;
    }}
    if (!encontrado) printf("Nenhum livro encontrado para o autor %s.\n", autor);
}
void lista_autores(struct livro *v, int n) {
    printf("\nAutores disponíveis:\n");
    for (int i = 0; i < n; i++) {
        int ja_listado = 0;
        for (int j = 0; j < i; j++) { 
            if (strcmp(v[i].autor, v[j].autor) == 0) {
                ja_listado = 1;
                break;
        }}
        if (!ja_listado) printf("%s\n", v[i].autor);
    }
}
int main() {
    struct livro biblioteca[] = {
        {"O Senhor dos Aneis", "Tolkien", 1954},
        {"O Hobbit", "Tolkien", 1937},
        {"1984", "Orwell", 1949},
        {"A Revolução dos Bichos", "Orwell", 1945},
        {"Dom Casmurro", "Machado", 1899},
        {"Memórias Póstumas", "Machado", 1881},
        {"O Código Da Vinci", "Brown", 2003},
        {"Anjos e Demônios", "Brown", 2000}
    };
    lista_autores(biblioteca, 8);
    char autor[16];
    printf("Digite o nome do autor para procurar seus livros: \n");
    fgets(autor, 16, stdin);
    autor[strcspn(autor, "\n")] = '\0';
    procura_livro(biblioteca, 8, autor);
    return 0;
}
