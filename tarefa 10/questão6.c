
#include<stdio.h>
#include<stdlib.h>
#include <math.h>

float calculaDesvioPadrao(float v[], int n){
  float soma, media, desvio_padrao;
  desvio_padrao = 0;
  media = 0;
  soma = 0;
  for(int i = 0; i < n; i++){
      soma += v[i];
  }
  media = soma / n;
  for(int i = 0; i < n; i++){
    desvio_padrao += desvio_padrao + pow(v[i] - media, 2);
  }
  desvio_padrao = sqrt(desvio_padrao/n);
  printf("Desvio padrão= %f\n", desvio_padrao);
}
int main()
{
  float vetor[6] = {1, 2, 3, 4, 5, 6};
  calculaDesvioPadrao(vetor,6);
  return 0;
}
