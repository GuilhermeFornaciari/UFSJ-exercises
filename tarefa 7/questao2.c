#include<stdio.h>
#include<stdlib.h>

float function(float r){
  float pi = 3.14159265359;
  return (4 * pi * r * r * r)/3 ;
}

int main(){
  float X; scanf("%f",&X);
  printf("Volume da esfera: %f\n",  function(X));
  
  return 0;


}