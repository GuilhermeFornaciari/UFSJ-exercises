#include<stdio.h>
#include<stdlib.h>

int main(){

        int a=0, b, i=0;

        do 
    
        {
            scanf("%d",&a);
            
            if(a>=0){
            b=b+a;
            i++;
            }


        }while (a>=0);

        a=b/i;

        printf("%d",a);
    




    return 0;
}