#include<stdio.h>
#include<stdlib.h>
void zeraNegativos(int v[], int n){
  for (int i = 0; i<n;i++) v[i] = v[i] < 0? 0: v[i];
}
int main(){
  
  int vetor[6] = {1, 0, 5, -2, -5, 7}; 
  for (int i = 0; i<6;i++) printf("%d ",vetor[i]);
  printf("\n");
  zeraNegativos(vetor,6);
  for (int i = 0; i<6;i++) printf("%d ",vetor[i]);
  printf("\n");
}