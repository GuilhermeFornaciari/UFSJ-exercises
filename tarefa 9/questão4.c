#include<stdio.h>
#include<stdlib.h>
void main() { 
  int x, y; 
  x = 123; //qualquer valor
  y = 321; //qualquer valor
  printf("X=%d\nY=%d\n",&x,&y);
  if (&x > &y) printf ("Valor de X é maior do que Y\n");
  else printf ("Valor de Y é maior do que X\n");
}

