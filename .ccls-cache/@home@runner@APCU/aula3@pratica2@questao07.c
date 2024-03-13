/*
Faça um programa em C que leia o valor da hora de trabalho e o total de horas trabalhadas no mês e calcule o salário bruto, o salário líquido, e os impostos descontados. Considere IR igual a 25% e INSS igual a 11%.
*/

#include <stdio.h>

int main() {

  float valor_da_hora_de_trabalho = 150.0f;
  float total_de_horas_trabalhadas_no_mes = 100.0f;
  float valor_salario_bruto = valor_da_hora_de_trabalho * total_de_horas_trabalhadas_no_mes;
  
  const float IR = 0.25f;
  const float INSS = 0.11f;

  float valor_imposto_renda = valor_salario_bruto * IR;
  float valor_imposto_inss = valor_salario_bruto * INSS;

  float valor_salario_liquido = valor_salario_bruto - valor_imposto_renda - valor_imposto_inss;

  printf("------------------------------------\n");
  printf("    C O N T R A C H E Q U E   \n");
  printf("------------------------------------\n");
  printf("Salario Bruto...: \x1b[34m%14.2f\x1b[0m\n", valor_salario_bruto);
  printf("Imposto Renda...: \x1b[31m%14.2f\x1b[0m\n", valor_imposto_renda);
  printf("Imposto INSS...: \x1b[31m%14.2f\x1b[0m\n", valor_imposto_inss);
  printf("Salario Liquido...: \x1b[34m%14.2f\x1b[0m\n", valor_salario_liquido);

  
  return 0;
}








