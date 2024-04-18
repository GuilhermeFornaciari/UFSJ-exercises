#include<stdio.h>

int main(){
  float salario,diferenca;
  printf("Qual é o valor do seu salário?\n");
  scanf("%f", &salario);
  float desconto = 0;
  while (salario != 0)
  {
    if (salario <= 600.0)
    {
      salario = 0;
    } else if (salario > 600 && salario <= 1300)
    {
      diferenca = salario - 600;
      desconto += 0.1 * diferenca;
      salario = salario - diferenca;
    } else
    {
      diferenca = salario - 1300;
      desconto += 0.15 * diferenca;
      salario = salario - diferenca;
    }
  }
  printf("O desconto previsto é de R$%f Reais\n", desconto);
  return 0;
}