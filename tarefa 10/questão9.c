
#include<stdio.h>
#include<stdlib.h>
void inverteValores(int *x, int *y){
  int aux = *x;
  *x = *y;
  *y = aux;
}
void organiza(int v[], int tam){
  int isOrganized = 0;
  while (!isOrganized){
    isOrganized = 1;
    for (int i = 0; i < tam-1; i++){
      if (v[i] > v[i+1]){
        isOrganized = 0;
        inverteValores(&v[i],&v[i+1]);
      }
    }
  }
}
void separaParesImpares(unsigned int v[], int tam){
  // organiza(v,tam);
  int isOrganized = 0;
  while (!isOrganized){
    isOrganized = 1;
    for (int i = 0; i < tam-1; i++){
      if ((v[i] % 2 == 1) && (v[i+1] % 2 == 0) ){
        inverteValores(&v[i],&v[i+1]);
      }
    }
  }
}
int main(){
  // int vetor[6] = {1, 0, 5, -2, -5, 7}; 
  int vetor[6] = {1, -2, 6, 2, -1, -7}; 
  separaParesImpares(vetor,6);
  for (int i = 0; i<6;i++) printf("%d ",vetor[i]); // D
}


