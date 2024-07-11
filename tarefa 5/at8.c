#include<stdio.h>
#include<stdlib.h>


int main(){

    int a, b, resto=0;

    scanf("%d",&a);
    scanf("%d",&b);

    while (b != 0)
    {
        
        resto = a % b;
        a = b;
        b = resto;

            printf("%d,",a);


    }

    if (a==1)
    {
        printf("\n Eles são primos entre si");
    } else {
        printf("\n Eles não são primos entre si");
    }
    printf(" \n\n %d",a);

    
    return 0;

}