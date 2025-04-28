#include<stdio.h>
#include<stdlib.h>


void printTriangule(int m){
  for (int y = 0; y < m; y++ ){
    for (int x = 0 ; x <  y+1; x ++){
        printf("!");
      }
    printf("\n");
  }
  
  return 0;


}
int main(){
  int m=0; scanf("%d",&m);

  printTriangule(m);
  return 0;
}