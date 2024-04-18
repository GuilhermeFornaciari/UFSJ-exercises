#include<stdio.h>

int main(){
  int dia;
  printf("Digite o dia da semana entre 1-7\n");
  scanf("%d", &dia);

  switch (dia)
  {
  case 1: {
    printf("Domingo\n");
    break;
  }
  case 2: {
    printf("Segunda-Feira\n");
    break;
  }
  case 3: {
    printf("Terça-Feira\n");
    break;
  }
  case 4: {
    printf("Quarta-Feira\n");
    break;
  }
  case 5: {
    printf("Quinta-Feira\n");
    break;
  }
  case 6: {
    printf("Sexta-Feira\n");
    break;
  }
  case 7: {
    printf("Sabado\n");
    break;
  }  
  default:
    printf("Número inválido\n");
    break;
  }

  return 0;
}