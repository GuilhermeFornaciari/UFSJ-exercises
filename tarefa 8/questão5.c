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
typedef struct{ 
  Caixa caixa1; 
  Caixa caixa2; 
  Caixa caixa3; 
} Embalagem;
int main(){
  Embalagem embalagem;
  printf("Digite os valores de altura, largura e comprimento da primeira caixa\n");
  scanf("%f %f %f", &embalagem.caixa1.altura, &embalagem.caixa1.largura, &embalagem.caixa1.comprimento);
  printf("Digite os valores de altura, largura e comprimento da segunda caixa\n");
  scanf("%f %f %f", &embalagem.caixa2.altura, &embalagem.caixa2.largura, &embalagem.caixa2.comprimento);
  printf("Digite os valores de altura, largura e comprimento da terceira caixa\n");
  scanf("%f %f %f", &embalagem.caixa3.altura, &embalagem.caixa3.largura, &embalagem.caixa3.comprimento);
  if (
    cabe(embalagem.caixa1,embalagem.caixa2) && 
    cabe(embalagem.caixa2,embalagem.caixa3)
  ) printf("Cabe\n");
  else printf("Não cabe\n");
  return 0;
}