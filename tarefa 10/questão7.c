
#include<stdio.h>
#include<stdlib.h>

struct Coordenada{
  float x;
  float y;
};
int existe_coordenada(struct Coordenada coordenadas[], int n, struct Coordenada coordenada){
  for (int i = 0; i<n;i++) {
    if (coordenadas[i].x == coordenada.x && coordenadas[i].y == coordenada.y) return 1;
  }
  return 0;
}
int main()
{
  struct Coordenada vetor[4] = {
    {1,1},
    {2,2},
    {1,3},
    {3,1},
  };
  struct Coordenada coord ={1,3};
  struct Coordenada coord2 ={2,3};
  if(existe_coordenada(vetor,6,coord)) printf("Existe\n");
  else printf("Não existe\n");
  if(existe_coordenada(vetor,6,coord2)) printf("Existe\n");
  else printf("Não existe\n");

  return 0;
}
