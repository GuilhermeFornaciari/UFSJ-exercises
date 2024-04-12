#include <stdio.h>
int main(){
  int numero;
  scanf("%d",&numero);
  int a = numero / 100;
  int b = (numero - a * 100) / 10;
  int c = (numero - a * 100) - b * 10;

  printf("Seu numero é convertido é: %d%d%d\n", c,b,a);
}
