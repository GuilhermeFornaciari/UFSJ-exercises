#include<stdio.h>
#include<stdlib.h>

int isPrimo(int number){
  int primo = 1;
  for (int y = 2; y <= number - 1; y++)
  {
    if (number % y == 0) {
      return 0;
    };
    return 1;
  }
}
int isPrimoAndDivide(int number1, int number2){
  int maior = number1 > number2? number1: number2;
  for (int i = maior; i > 0; i--){
    if (!(number1 % i) && !(number2 % i) && isPrimo(i)) return i;
  }
  return 0;
}
int mdc(int number1, int number2){
  int menor = number1 < number2? number1: number2;
  for (int i = menor; i > 0; i--){
    if (!(number1 % i) && !(number2 % i)) return i;
    };
  return 0;
  }
int mmc(int number1, int number2){
  int menor = number1 < number2? number1: number2;
  for (int i = menor; i > 0; i++){
    if (!(i % number2)) return i;
    };
  return 0;
  }
int main(){
  int a, b; scanf("%d %d",&a, &b);
  while (1){
    printf("Escolha sua opção:\n 1 para MMC; 2 Para MDC\n 3 para primo Max que divide os dois\n 4 para sair\n");
    int opt; scanf("%d", &opt);
    if (opt == 4) break;
    else if( opt == 1){
      printf("o MMC é %d",mmc(a,b));
    } else if (opt == 2){
      printf("o MDC é %d",mdc(a,b));
    } else{
      printf("O menor primo que divide ambos é %d", isPrimoAndDivide(a,b));
    }
    printf("\n");
  }
  return 0;


}

