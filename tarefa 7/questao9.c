#include<stdio.h>
#include<stdlib.h>

int mmc(int number1, int number2){
  int maior, menor;
  if (number1 < number2){
    menor = number1;
    maior = number2;
  } else{
    menor = number2;
    maior = number1;
  }

  int i = 1;
  while(1){
    if (!(menor * i % maior) ) break;
    i++;
  }
  return menor * i;
  }
int main(){
  int X, Y; 
  scanf("%d %d",&X, &Y);
  printf("%d\n", mmc(X,Y));
  return 0;
}