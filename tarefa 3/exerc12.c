#include <stdio.h>
int main(){
  int numero;
  scanf("%d",&numero);
  // float resultado = ((numero * 3)+ 1) + ((numero * 2) -1);
  //simplificando a equação: 
  float resultado = numero * 3 + numero * 2;
  printf("O resultado da conta é %f\n",resultado);
}
