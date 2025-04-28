#include<stdio.h>
#include<stdlib.h>

int main(){

        int a=0, b=0, i=0;

        do 
    
        {
            scanf("%d",&a);
            
            if(a>=0){
            b=b+a;
            i++;
            }


        }while (a>=0);

        a=b/i;

        printf("%d\n",a);
    




    return 0;
}