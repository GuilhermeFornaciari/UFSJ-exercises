#include<stdio.h>
#include<stdlib.h>

int mmc(int number1, int number2){
  int maior, menor;
  if (number1 < number2){
    menor = number1;
    maior = number2;
  } else{
    menor = number2;
    maior = number1;
  }

  int i = 1;
  while(1){
    if (!(menor * i % maior) ) break;
    i++;
  }
  return menor * i;
  }

int mdc(int number1, int number2){
  int menor = number1 < number2? number1: number2;
  for (int i = menor; i > 0; i--){
    if (!(number1 % i) && !(number2 % i)) return i;
    };
  return 0;
  }
  
int isPrimo(int number){
  for (int y = 2; y <= number - 1; y++){
    if (number % y == 0) {
      return 0;
    }
  }
  return 1;
}
int isPrimoAndDivide(int number1, int number2){
  int maior = number1 > number2? number1: number2;
  for (int i = maior; i > 0; i--){
    if (!(number1 % i) && !(number2 % i) && isPrimo(i)) return i;
  }
  return 0;
}
int main(){
  int X, Y; 
  while (1){
    printf("Digite dois numeros:\n ");
    scanf("%d %d",&X, &Y);
    printf("O mínimo múltiplo comum (MMC) entre a e b (1)\n O máximo divisor comum (MDC) entre a e b (2)\n O maior número primo que divide ambos (3)\n Saída (qualquer numero negativo)");
    int escolha, resultado; 
    scanf("%d", &escolha);
    if (escolha == 1) resultado = mmc(X,Y);
    else if (escolha == 2) resultado = mdc(X,Y);
    else if (escolha == 3) resultado = isPrimoAndDivide(X,Y);
    else if (escolha < 0 ) break;
    printf("%d\n", resultado);
  }
  
  return 0;
}