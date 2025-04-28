#include<stdio.h>
#include<stdlib.h>

float FahrenheitToCelsius(float F){
  return (F - 32.0) * (5.0/9.0);
}

int main(){
  float fahr; scanf("%f",&fahr);
  printf("Fahrenheit: %f\n Celsius: %f\n", fahr, FahrenheitToCelsius(fahr));
  
  return 0;


}