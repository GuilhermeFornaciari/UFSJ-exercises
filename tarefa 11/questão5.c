#include<stdio.h>
#include<stdlib.h>
#include <limits.h>
void printSegmento(char *texto, int i, int j){
  for (int s = i-1; s<j;s++) printf("%c",texto[s]);
  printf("\n");
}
int main(){
  char string[100] = "Guilherme"; 
  printSegmento(string,2,4);
  return 0;
}