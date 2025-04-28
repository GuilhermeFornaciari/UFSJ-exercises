#include<stdio.h>
#include<stdlib.h>


char maiusculo(char m){
  if (m >= 65 && m <= 90) return m;
  if (m >= 97 && m <= 122) return m-32;
  printf("Não é letra!\n");
  return m;
}
int main(){
  char m; scanf("%c",&m);

  printf("%c\n", maiusculo(m));
  return 0;
}