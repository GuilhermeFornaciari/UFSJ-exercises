#include<stdio.h>
#include<stdlib.h>

int mdc(int number1, int number2){
  int menor = number1 < number2? number1: number2;
  for (int i = menor; i > 0; i--){
    if (!(number1 % i) && !(number2 % i)) return i;
    };
  return 0;
  }
int main(){
  int X, Y; 
  scanf("%d %d",&X, &Y);
  printf("%d\n", mdc(X,Y));
  return 0;
}