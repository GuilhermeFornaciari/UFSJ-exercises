#include<stdio.h>
#include<stdlib.h>

float add(float x, float y){
  return x + y;
}
float minus(float x, float y){
  return x - y;
}
float multiply(float x, float y){
  return x * y;
}
float divide(float x, float y){
  return x / y;
}

int main(){
  char operator; 
  float X, Y; 
  scanf("%f %f %c",&X, &Y, &operator);
  float result = 0;;
  switch (operator)
  {
  case '+':
    result = add(X,Y);
    break;
  case '-':
    result = minus(X,Y);
    break;
  case '*':
    result = multiply(X,Y);
    break;
  case '/':
    result = divide(X,Y);
    break;
  }
  printf("Resultado: %f\n",  result);
  
  return 0;


}