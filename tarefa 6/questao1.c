#include<stdio.h>
#include<stdlib.h>


int main(){
  int m=0;
  scanf("%d",&m);
  for (int x = 1; x < m+1; x ++){
    for (int y = 0 ; y < x; y ++){
      printf("%d", x);
      if (x != y +1) printf(",");
    }
    printf("\n");
  }
  
  return 0;


}