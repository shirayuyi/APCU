#include <stdio.h>

int main() {

char nome[31] = "";
int quantidade = 0;
float valor = 0.0f;


  
  printf("Entre com o nome do produto: ");
  int deu_certo = scanf("%[^\n]s", nome);


  printf("Entre com a quantidade do produto: ");
  int deu_certo1 = scanf("%i", &quantidade);


  printf("Entre com o valor do produto: ");
  int deu_certo2 = scanf("%f", &valor);

  float valor_total = quantidade * valor;

  
  printf("------------------------------\n");
  printf("  N  O  T  A    L  E  G  A  L \n");
  printf("------------------------------\n");
  printf("ITEM            QTD     VALOR\n");
  printf("%-14s %03i %11.2f\n", nome, quantidade, valor);
  printf("------------------------------\n");
  printf("TOTAL:      R$\n", valor_total);  
  printf("------------------------------\n");
  
  

  
  return 0;

  
}













