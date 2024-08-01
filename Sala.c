#include<stdio.h>
#include<stdlib.h>


int main(){
  int m=0;
  scanf("%d",&m);
  for (int x = m ; x > 0; x --){
    for (int y = m ; y > 0; y --){
      if (x<y) printf(" ");
      else printf("*");
    }
    printf("\n");
  }
  
  return 0;


}