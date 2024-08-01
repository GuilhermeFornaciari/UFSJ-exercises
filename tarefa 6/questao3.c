#include<stdio.h>
#include<stdlib.h>



int main(){
  int m=0;
  scanf("%d",&m);

  for (int y = 0; y < m; y++ ){
    for (int x = 0 ; x < m - y; x ++){
        printf(" ");
      }
    for (int x = 0 ; x < 2 * y + 1; x ++){
        printf("*");
      }
    printf("\n");
  }
  
  return 0;


}