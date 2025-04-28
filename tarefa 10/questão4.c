#include<stdio.h>
#include<stdlib.h>
double calculaMedia(double v[], int n){
  double media = 0;
  for (int i = 0; i<n;i++) media += v[i];
  media /= n;
  return media;
}
int main(){
  double vetor[6] = {rand(), rand(), rand(), rand(), rand(), rand()}; 
  for (int i = 0; i<6;i++) printf("%lf\n",vetor[i]);
  printf("Média = %lf",calculaMedia(vetor,6));
}