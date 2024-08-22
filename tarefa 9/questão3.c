#include<stdio.h>
#include<stdlib.h>
int main(){
int x, y, *p;
y = 0; 
p = &y; 
x = *p; 
x = 4; 
(*p)++; 
--x; 
*p = *p + x;
printf("%d %d %d",x,y,p);
}