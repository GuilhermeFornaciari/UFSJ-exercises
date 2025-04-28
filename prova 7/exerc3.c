#include<stdio.h>
#include<stdlib.h>
typedef struct carro {
  int id;
  int anoFabricacao;
  double preco;
} Carro;
Carro cheaper(Carro carro1, Carro carro2){
  return carro1.preco > carro2.preco? carro2 : carro1;  
}
int main(){
  printf("Digite o ID, o Ano, e o preço do carro 1\n");
  Carro x,y;
  scanf("%d %d %lf", &x.id, &x.anoFabricacao, &x.preco);
  printf("Digite o ID, o Ano, e o preço do carro 2\n");
  scanf("%d %d %lf", &y.id, &y.anoFabricacao, &y.preco);
  Carro cheaperCar = cheaper(x, y);
  printf("id: %d\nAno de fabricação: %d\nPreço: %f\n", cheaperCar.id,cheaperCar.anoFabricacao,cheaperCar.preco);
  return 0;
}