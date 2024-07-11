#include<stdio.h>
#include<stdlib.h>


int main(){

    int i, a=0,b=1;

    for(i=1;i<=10;i++){



        a=a+b;
        
        b=b+a;



    }
    printf("\n%d",a);


    return 0;
}