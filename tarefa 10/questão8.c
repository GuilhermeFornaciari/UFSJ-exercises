
#include<stdio.h>
#include<stdlib.h>

typedef struct{
  int id;
  int duracao;
  int ano;
} Filme;
void imprime_filme(Filme filmes[], int n, int id){
  for (int i = 0; i<n;i++) {
    if (filmes[i].id == id) return printf("Ano: %d\nDuração: %d\n",filmes[i].ano,filmes[i].duracao);
  }
  printf("Filme com id %d não existe\n",id);
}

