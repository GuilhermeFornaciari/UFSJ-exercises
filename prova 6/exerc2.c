#include<stdio.h>
#include<stdlib.h>
int fatorial(int x){
  int total = 1;
  for (int i = 2; i <= x; i ++) total *= i;
  return total;
}
int main(){
  int X;
  do
  {
    scanf("%d",&X);
    printf("%d\n", fatorial(X));
  } while (X > 0);

  return 0;
}