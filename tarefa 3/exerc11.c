#include <stdio.h>

int main(){
  int a = 125, b = 12345;
  long ax = 1234567890;
  short s = 4043;
  float x = 2.13459;
  double dx = 1.1415927;
  char c = 'W';
  unsigned long ux = 2541567890;

  printf("a = %d\n", a);
  printf("b = %d\n", b);
  printf("ax = %li\n", ax);
  printf("s = %u\n", s);
  printf("x = %f\n", x);
  printf("dx = %lf\n", dx);
  printf("c = %c\n", c);
  printf("ux = %lu\n", ux);


  return 0;
}