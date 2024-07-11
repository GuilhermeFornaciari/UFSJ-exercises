#include<stdio.h>
#include<stdlib.h>


int main(){

    int n, n1, o, r;
    while (o!=5)
    {
        printf("\n --------------------\n ");
        scanf("%d %d",&n,&n1);
        scanf("%d",&o);

        if (o==1)
        {

            r=n+n1;
            printf("\n%d",r);
            
        }else if (o==2)
        {

            r=n-n1;
            printf("\n%d",r);
            
        }else if (o==3)
        {

            r=n*n1;
            printf("\n%d",r);
            
        }else if (o==4)
        {

            r=n/n1;
            printf("\n%d",r);
            
        }

        
    }
    return 0;

}