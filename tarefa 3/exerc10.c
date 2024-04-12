#include <stdio.h>
int main(){
  double salario;
  float aumentoEmPorcentagem;
  printf("Digite o valor do salário\n");
  scanf("%lf", &salario);
  printf("Digite o valor do aumento\n");
  scanf("%f", &aumentoEmPorcentagem);
  salario += (aumentoEmPorcentagem/100.0) * salario;
  printf("O novo salário é %lf\n", salario);

  return 0;
}
