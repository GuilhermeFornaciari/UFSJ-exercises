#include<stdio.h>

int main(){
  float km;
  char carro;
  printf("Qual é o seu tipo de carro? A, B ou C?\n");
  scanf("%c", &carro);
  printf("Quantos kilometros você pretende andar?\n");
  scanf("%f", &km);

  int gasto;
  switch (carro)
  {
  case 'A':{
    gasto = 12;
    break;
    }  
  case 'B':{
    gasto = 9;
    break;
    }  
  case 'C':{
    gasto = 8;
    break;
    }
  default:
    printf("Valor do Carro é inválido");
    break;
  }

  printf("O custo previsto de combustível é de %f litros\n", km/gasto);
  return 0;
}