#include<stdio.h>
#include<stdlib.h>
#include <limits.h>
void imprimeMaiorEPosicao(int v[], int n){
  int maior = INT_MIN;
  int posMaior;
  for (int i = 0; i<n;i++) maior = maior > v[i]? maior: v[i],posMaior = i;
  printf("O maior valor é %d e o seu index é %d", maior, posMaior);
}
int main(){
  
  int vetor[6] = {1, 0, 5, -2, -5, 7}; 
  imprimeMaiorEPosicao(vetor,6);
}