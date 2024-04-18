#include<stdio.h>

int main(){
  int NumeroDeLados;
  float area, ladoEmCm;
  printf("Digite quantos lados tem o poligono:\n");
  scanf("%i", &NumeroDeLados);
  printf("Digite quantos cm mede o lado do poligono:\n");
  scanf("%f", &ladoEmCm);

  if (NumeroDeLados == 3){
    area = ladoEmCm * ladoEmCm * 1.732050808 / 4;
    printf("TRIÂNGULO, E A ÁREA É %f\n", area);
  } else if (NumeroDeLados == 4){
    area = ladoEmCm * ladoEmCm ;
    printf("QUADRADO, E A ÁREA É %f\n", area);
  } else if (NumeroDeLados == 5){
    printf("PENTÁGONO");
  } else {
    printf("Número de lados inválido!\n");
  }
  return 0;
}