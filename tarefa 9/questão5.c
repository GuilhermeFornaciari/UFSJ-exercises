#include<stdio.h>
#include<stdlib.h>
void maior_menor(int *end_var1, int *end_var2){
  if (*end_var1 < *end_var2){
    int aux = *end_var1;
    *end_var1 = *end_var2;
    *end_var2 = aux;
  }
}

int main(){
  int var1, var2;
  scanf("%d %d", &var1, &var2);
  maior_menor(&var1, &var2);
  printf("Numeros organizados: %d %d\n", var1, var2);
  return 0;
}
