#include<stdio.h>
#include<stdlib.h>

int main(){

    int b, i;

    char a;

    scanf("%c",&a);
    scanf("%d",&b);

    for ( i = 1; i <= b; i++)
    {
        if(i!=b){
        printf("%c,", a);
        }
        else{

            printf("%c.", a);

        }
    }
    



    return 0;
}