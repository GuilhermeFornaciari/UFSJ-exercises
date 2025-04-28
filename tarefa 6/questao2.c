#include<stdio.h>
#include<stdlib.h>


int main(){
  int primeiro, segundo; scanf("%d %d",&primeiro, &segundo);
  
  for (int x = primeiro; x <= segundo; x ++){
    int primo = 1;
    for (int y = 2; y <= x - 1; y++)
    {
      if (x % y == 0) {
        // printf("%d/%d\n,",x,y);  
        primo = 0;
        break;
      };
    }
    if (primo) printf("%d,",x);  

  }
  
  return 0;


}