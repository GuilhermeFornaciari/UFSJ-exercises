#include<stdio.h>
#include<stdlib.h>

int getNumberDigits(int n){
  int number = n;
  int count = 0;
  while(number != 0)  {  
    number=number/10;  
    count++;  
  } 
  if (!count) count++;
  return count;
}
int main(){
  int primeiro, segundo; scanf("%d %d",&primeiro, &segundo);
  printf(" "); for (int i = 0; i < getNumberDigits(segundo) - getNumberDigits(primeiro); i++) printf(" ");
  printf("| ");
  for (int x = primeiro; x <= segundo; x++){
    printf("%d ",x);
    for (int i = 0; i < getNumberDigits(x*segundo) - getNumberDigits(x) ; i++) printf(" ");
  }
  printf("\n");
  for (int x = primeiro; x <= segundo +1; x++){
    if (x == primeiro) {
      printf("_");
      for (int i = 0; i < getNumberDigits(segundo) - getNumberDigits(x); i++) printf(" ");
      printf("| ");
      }
    else {
      for (int i = 0; i < getNumberDigits((x-1)*segundo); i++) printf("_");
      printf(" ");
    }
  }
  printf("\n");
  for (int x = primeiro; x <= segundo; x++){
    printf("%d", x);
    for (int i = 0; i < getNumberDigits(segundo) - getNumberDigits(x); i++) printf(" ");
    printf("| ");
    for (int y = primeiro; y <= segundo; y++){
      printf("%d ",x*y);
      for (int i = 0; i < getNumberDigits(y*segundo) - getNumberDigits(x*y); i++) printf(" ");
      
    } 
    printf("\n");
  }
  return 0;


}
