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
  Carro x = {
    1,
    2023,
    2000.3
  };
  Carro y = {
    2,
    2024,
    1900.5
  };
  Carro cheaperCar = cheaper(x, y);
  printf("%d,  %f\n", cheaperCar.id,cheaperCar.preco);

  return 0;
}