#include<stdio.h>
#include<stdlib.h>
void maior(int A, int B, int *x){
  if (A>B) *x= A;
  else *x = B;
}

int main(){
  int a,b,x;
  scanf("%d %d", &a, &b);
  maior(a,b,&x);
  printf("Maior valor lido=%d\n", x);
  return 0;
}