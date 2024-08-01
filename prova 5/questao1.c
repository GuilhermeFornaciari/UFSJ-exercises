#include<stdio.h>
#include<stdlib.h>

int main (){
  int N = 0;
  printf("Digite um número inteiro positivo ");
  scanf("%d", &N);
  for (int i = N; i > 0; i--)
  {
    if (i % 3 == 0 || i % 5 == 0) printf("%d\n",i);
  }
  

  return 0;
}