#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float seno(float rad){
    int i;
    float seno = 0;
    for(i = 1; i <= 5; i++){
      int k, fat = 1;
      for(k = 1; k <= i; k++){
          fat *= k;
      }
      seno += rad - (pow(rad,i)/fat);
    }
    return seno;
}

int main(){

    float angulo_rad, seno_ang;
    scanf("%f",&angulo_rad);
    float pi = 3.1414592;
    angulo_rad = (pi*angulo_rad)/180;
    seno_ang = seno(angulo_rad);


    printf("seno: %f\n", seno_ang);
    return 0;
}