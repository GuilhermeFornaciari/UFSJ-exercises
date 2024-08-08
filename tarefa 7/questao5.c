#include<stdio.h>
#include<stdlib.h>

int soma_algarismos(int F){
  if (F <= 0 ) return -1;
  int number = F;
  int count = 0;
  while(number != 0)  {  
    count += number - (number/10)*10;
    number /= 10 ;
  } 
  return count;
}

int main(){
  int X; scanf("%d",&X);
  printf("Soma dos algarismos: %d\n ", soma_algarismos(X));
  return 0;
}