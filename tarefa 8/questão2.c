#include<stdio.h>
#include<stdlib.h>
#include "math.h"

struct coordenada {
  float x;
  float y;
};
double distancia(struct coordenada ponto1, struct coordenada ponto2){
  return sqrt(
    pow(ponto1.x-ponto2.x,2) + pow(ponto1.y-ponto2.y,2)
  );
}
int main(){
  struct coordenada coord1,coord2;
  printf("Digite o x e y da primeira coordenada:\n");
  scanf("%f %f", &coord1.x, &coord1.y);
  printf("Digite o x e y da segunda coordenada:\n");
  scanf("%f %f", &coord2.x, &coord2.y);
  printf("Distancia entre os dois pontos: %lf", distancia(coord1,coord2));
  return 0;


}