#include<stdio.h>
#include<stdlib.h>
#include "math.h"

struct coordenada {
  float x;
  float y;
};
struct Triangulo{
  struct coordenada p1;
  struct coordenada p2;
  struct coordenada p3;
};
double ValorLado(struct coordenada ponto1, struct coordenada ponto2){
  return sqrt(
    pow(ponto1.x-ponto2.x,2) + pow(ponto1.y-ponto2.y,2)
  );
}
void tipo_triangulo(struct Triangulo triangulo){
  double lados[3] = {0,0,0};
  lados[0] = ValorLado(triangulo.p1,triangulo.p2);
  lados[1] = ValorLado(triangulo.p2,triangulo.p3);
  lados[2] = ValorLado(triangulo.p1,triangulo.p3);
  printf("%lf\n%lf\n%lf\n",lados[0],lados[1],lados[2]);
  int ladosIguais = 0;
  if( lados[0] ==  lados[1]) ladosIguais++;
  if( lados[0] ==  lados[2]) ladosIguais++;
  if( lados[1] ==  lados[2]) ladosIguais++;
  switch (ladosIguais){
  case 0:
    printf("O triangulo é isóceles\n");
    break;
  case 1:
    printf("O triangulo é escaleno\n");
    break;
  case 2:
    printf("O triangulo é equilátero\n");
    break;
  }
}
int main(){
  struct Triangulo triangulo;
  printf("Digite o x e y da primeira coordenada:\n");
  scanf("%f %f", &triangulo.p1.x, &triangulo.p1.y);
  printf("Digite o x e y da segunda coordenada:\n");
  scanf("%f %f", &triangulo.p2.x, &triangulo.p2.y);
  printf("Digite o x e y da terceira coordenada:\n");
  scanf("%f %f", &triangulo.p3.x, &triangulo.p3.y);
  tipo_triangulo(triangulo);
  return 0;


}