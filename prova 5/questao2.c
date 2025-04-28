#include<stdio.h>
#include<stdlib.h>

int main (){
  int numero = 1, menor = 999, maior = 0;
  while (1)
  {
    printf("Digite um número inteiro positivo ");
    scanf("%d", &numero); 
    if (numero == 0) break;
    if (numero < 0) {
      printf("Numero inválido pois é negativo");
      continue;
    };
    if (numero < menor) menor = numero;
    if (numero > maior) maior = numero;
  }
  printf("Menor: %d\nMaior: %d\n",menor,maior);
  return 0;
}