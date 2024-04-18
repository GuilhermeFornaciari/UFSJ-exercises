#include <stdio.h>

int main() {
  int x, y, z;
  
  printf("Digite três numeros: ");
  scanf("%d", &x);
  scanf("%d", &y);
  scanf("%d", &z);
  
  if (z > x)
    if (x > y)
      printf("%d %d %d\n", y, x, z);
    else if (y < z)
      printf("%d %d %d\n", x, y, z);
  if (x > y)
    if (y > z)
      printf("%d %d %d\n", z, y, x);
    else if (z < x)
      printf("%d %d %d\n", y, z, x);
  if (x < y)
    if (z < x)
      printf("%d %d %d\n", z, x, y);
    else if (z < y)
      printf("%d %d %d\n", x, z, y);
  
  return 0;
}