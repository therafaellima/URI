#include <stdio.h>

int main () {
    int num_funcionario, hr_trab;
    float salario, valorhr;
    /*ler o número de um funcionário, seu número de horas trabalhadas, 
    o valor que recebe por hora.*/
    //printf("Digite o numero do funcionario: ");
    scanf("%d", &num_funcionario);
    //printf("\nAgora digite o numero de horas trabalhadas do funcionario: ");
    scanf("%d", &hr_trab);
    //printf("\nInforme o valor que o funcionario recebe por hora: U$");
    scanf("%f", &valorhr);
    //calcular o salário desse funcionário.
    salario = valorhr * hr_trab;
    //mostrar o número e o salário do funcionário, com duas casas decimais.
    printf("NUMBER = %d\n", num_funcionario);
    printf("SALARY = U$ %.2f\n", salario);
    return 0;
}