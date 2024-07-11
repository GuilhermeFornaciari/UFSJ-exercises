#include<stdio.h>
#include<stdlib.h>

int main(){

    int a, b=0;

    for(a=0;a<=1000;a++){

        if (a % 7 == 0){

            b=b+1;
            
        }
        
    }

    printf("%d", b);

    return 0;
}