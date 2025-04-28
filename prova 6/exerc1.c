#include<stdio.h>
#include<stdlib.h>
int soma_impar(int x, int y){
  int total = 0 ;
  for (int i = x % 2? x: ++x; i <= y; i += 2)
  {
    total += i;
  }
  return total;
}
int main(){

  int primeiro, segundo; scanf("%d %d",&primeiro, &segundo);

  printf("%d\n", soma_impar(primeiro, segundo));

  return 0;
}