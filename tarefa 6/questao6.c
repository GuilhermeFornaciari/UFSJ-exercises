#include<stdio.h>
#include<stdlib.h>
int main(){
  int primeiro, segundo; scanf("%d %d",&primeiro, &segundo);
  printf(" | ");
  for (int x = 1; x <= 8; x++){
    printf("%d ",x);
  }
  printf("\n");
  for (int x = 1; x <= 8 +1; x++){
    if (x == 1) {
      printf("_|_");
      }
    else {
      printf("__");
    }
  }
  printf("\n");
  for (int x = 1; x <= 8; x++){
    printf("%d", x);
    printf("| ");
    for (int y = 1; y <= 8; y++){
      if (x == segundo || y == primeiro ) printf("X ");
      else printf("_ ");
      
    } 
    printf("\n");
  }
  return 0;


}
