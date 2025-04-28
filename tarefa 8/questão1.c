#include<stdio.h>
#include<stdlib.h>

typedef struct filme {
  int id;
  int ano;
  int duracao;
} Filme;
int main(){
  Filme filme;
  scanf("%d %d %d", &filme.id, &filme.ano, &filme.duracao);
  printf("Código do filme: %d\nAno de lançamento: %d\nDuração do filme: %d\n",filme.id,filme.ano,filme.duracao);
  
  return 0;


}