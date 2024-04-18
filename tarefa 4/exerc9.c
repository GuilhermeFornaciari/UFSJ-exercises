#include <stdio.h>

int main() {
  float peso, altura;
  
  printf("Digite o peso da pessoa: \n");
  scanf("%f", &peso);
  printf("Digite a altura (em metros) da pessoa: \n");
  scanf("%f", &altura);
  
  float imc = peso / (altura * altura);
  
  if (imc <= 18.5)
    printf("Abaixo do peso\n");
  else if (imc >= 18.6 && imc <= 24.9)
    printf("Saudável\n");
  else if (imc >= 25 && imc <= 29.9)
    printf("Peso em excesso\n");
  else if (imc >= 30 && imc <= 34.9)
    printf("Obesidade grau I\n");
  else if (imc >= 35 && imc <= 39.9)
    printf("Obesidade grau II (severa)\n");
  else printf("Obesidade grau III (mórbida)\n");
    
  
  return 0;
}