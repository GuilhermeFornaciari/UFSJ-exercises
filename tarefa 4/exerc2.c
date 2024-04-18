#include<stdio.h>

int main(){
  int x,y;
  printf("Digite 2 numeros\n");
  scanf("%d", &x);
  scanf("%d", &y);

  if (x>y)
  {
    printf("%d\n",x);
  } else if (y>x){
    printf("%d\n",y);
  } else {
    printf("Os dois números são iguais\n");
  }
  

  return 0;
}