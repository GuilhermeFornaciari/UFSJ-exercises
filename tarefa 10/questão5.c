
#include<stdio.h>
#include<stdlib.h>
double calculaProdutoEscalar (double u[],double v[], int n){
  double soma = 0;
  for (int i = 0; i<n;i++) soma += v[i] * u[i];
  return soma;
}
int main()
{
  double vetor1[2] = {1,2};
  double vetor2[2] = {2,1};
  printf("%lf\n",(calculaProdutoEscalar(vetor1,vetor2,2)));
  return 0;
}
