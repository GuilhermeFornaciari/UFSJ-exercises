#include<stdio.h>
#include<stdlib.h>

int isPrimo(int number){
  for (int y = 2; y <= number - 1; y++){
    if (number % y == 0) {
      return 0;
    }
  }
  return 1;
}
int isPrimoAndDivide(int number1, int number2){
  int maior = number1 > number2? number1: number2;
  for (int i = maior; i > 0; i--){
    if (!(number1 % i) && !(number2 % i) && isPrimo(i)) return i;
  }
  return 0;
}
int main(){
  int X, Y; 
  scanf("%d %d",&X, &Y);
  printf("%d\n", isPrimoAndDivide(X,Y));
  return 0;
}