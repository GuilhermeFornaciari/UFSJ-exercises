#include<stdio.h>
#include<stdlib.h>
int main(){
  int vetor[6] = {1, 0, 5, -2, -5, 7}; //A
  int soma = vetor[0] + vetor[1] + vetor[5]; printf("Soma = %d\n", soma); // B
  vetor[4] = 100; //C
  for (int i = 0; i<6;i++) printf("%d\n",vetor[i]); // D
}