#include <stdio.h>
int main(){
  char caracter;
  scanf("%c",&caracter);
  caracter = (int) caracter - 32;
  printf("Seu caracter é convertido para maiusculo é: %c\n",caracter);
}
