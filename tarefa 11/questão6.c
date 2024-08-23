#include <stdio.h>
#include <string.h>
struct Funcionario {
    char nome[50];
    int idade;
    char sexo;
    char cpf[12];
    char dataDeNascimento[10];
    int codigoSetor;
    char cargo[30];
    float salario;
};
int main() {
    struct Funcionario funcionario;
    printf("Digite o nome do funcionário: ");
    fgets(funcionario.nome, 50, stdin);
    funcionario.nome[strcspn(funcionario.nome, "\n")] = '\0';  // Remover o newline do final da string
    printf("Digite a idade do funcionário: ");
    scanf("%d", &funcionario.idade);
    printf("Digite o sexo do funcionário (M/F): ");
    scanf(" %c", &funcionario.sexo);
    printf("Digite o CPF do funcionário (apenas números): ");
    scanf("%s", funcionario.cpf);
    fgets(funcionario.dataDeNascimento, 10, stdin);
    funcionario.dataDeNascimento[strcspn(funcionario.dataDeNascimento, "\n")] = '\0';  // Remover o newline do final da string
    printf("Digite o código do setor (0-99): ");
    scanf("%d", &funcionario.codigoSetor);
    printf("Digite o cargo do funcionário: ");
    getchar();  // Limpar o buffer do teclado
    fgets(funcionario.cargo, 30, stdin);
    funcionario.cargo[strcspn(funcionario.cargo, "\n")] = '\0';  // Remover o newline do final da string
    printf("Digite o salário do funcionário: ");
    scanf("%f", &funcionario.salario);
    printf("\n=== Dados do Funcionário ===\n");
    printf("Nome: %s\n", funcionario.nome);
    printf("Idade: %d\n", funcionario.idade);
    printf("Sexo: %c\n", funcionario.sexo);
    printf("CPF: %s\n", funcionario.cpf);
    printf("Data de Nascimento: %s\n", funcionario.dataDeNascimento);
    printf("Código do Setor: %d\n", funcionario.codigoSetor);
    printf("Cargo: %s\n", funcionario.cargo);
    printf("Salário: %.2f\n", funcionario.salario);
    return 0;
}
