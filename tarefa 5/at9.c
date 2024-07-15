#include<stdio.h>
#include<stdlib.h>


int main(){

    int a=0, b=0, i;

    scanf("%d",&a);

    for (i=1; i<a; i++){



        if(a%i==0){

            b=i+b;
            //printf("\n%db ",b);
        }
    }
    printf("\n\n%d",b);
    return 0;

}