#include<stdio.h>
#include<stdlib.h>

int function(int h, int m, int s){
  return ((h * 60 + m) * 60) + s;
}

int main(){
  int H; scanf("%d",&H);
  int M; scanf("%d",&M);
  int S; scanf("%d",&S);
  printf("Tempo em segundos: %d\n",  function(H,M,S));
  return 0;


}