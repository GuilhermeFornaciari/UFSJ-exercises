#include<stdio.h>
#include<stdlib.h>


int main(){
    int f=1, q=0, s=0, i=0, m1=0, m2=99999999, ni=0;
    float p;
    while(1){
        printf("Escreva um numero: \n");
        scanf("%d",&f);
        if (!f) break;
        s=s+f;
        i++;
        if(f>m1){
            m1=f;
        }
        if(f<m2){
            m2=f;
        }
        if(f%2!=0){
            ni++;
        }
        p=(ni*100)/i;
    }
    printf("soma: %d\n",s);
    printf("quantidade: %d\n",i);
    printf("Maior numero: %d\n",m1);
    printf("menor numero: %d\n",m2);
    printf("porcentagem de numeros impares: %f\n",p);
    return 0;
}