#include<stdio.h>
#include<stdlib.h>

typedef struct{ 
  float comprimento; 
  float largura;
  float altura; 
} Caixa;
int cabe(Caixa a, Caixa b){
  return 
  a.altura < b.altura &&
  a.largura < b.largura &&
  a.comprimento < b.comprimento;
}
int main(){
  Caixa x,y;
  printf("Digite os valores de altura, largura e comprimento da primeira caixa\n");
  scanf("%f %f %f", &x.altura, &x.largura, &x.comprimento);
  printf("Digite os valores de altura, largura e comprimento da segunda caixa\n");
  scanf("%f %f %f", &y.altura, &y.largura, &y.comprimento);

  if (cabe(x,y)) printf("Cabe\n");
  else printf("Não cabe\n");

  return 0;
}