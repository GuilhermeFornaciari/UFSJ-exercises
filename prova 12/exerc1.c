#include<stdio.h>
#include<stdlib.h>
int numColunasNulas(int m[][100],int numLinhas){
  int colunasNulas = 0;
  for (int X = 0; X < numLinhas; X++)
  {
    int somaY = 0;
    for (int Y = 0; Y < 100; Y++) somaY+= m[X][Y];
    if (!somaY) colunasNulas += 1;
  }
  return colunasNulas;
}

int main(){
  int m[100][100] = {
    {2,0,0,0},
    {0,0,1,0}
  };
  printf("%d\n",numColunasNulas(m,100));
}