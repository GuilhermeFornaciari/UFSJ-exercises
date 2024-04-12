#include <stdio.h>
int main(){
  float raio, perimetro;
  float pi = 3.141592;
  scanf("%f", &raio);
  perimetro = 2 * pi * raio;
  printf("O PERIMETRO da circunferência é %f\n",perimetro);
}
