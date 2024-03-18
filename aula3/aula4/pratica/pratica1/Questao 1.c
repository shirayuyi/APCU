#include <stdio.h>

int main(){

/*
  1. Faça um programa em C que calcule a média final a partir da fórmula (0,4 x A1) + (0,6 x A2). Considere A1 e A2 números reais entre 0 a 10.
*/

  
  
float av1 = 0.0f;
float av2 = 0.0f;
  float peso1 = 0.4
  float peso2 = 0.6

  float media1 = (peso1 * av1);
  float media2 = (peso2 * av2);

  
  

  printf("Insira sua nota (AV1): ");
  float deu_certo1 = scanf("%f", &av1);
  
  printf("Insira sua nota (AV2): ");
  float deu_certo2 = scanf("%f", &av2);

  float media_final = (media1 + media2) / 2;
  
  printf("--------------------\n");
  printf("M E D I A  F I N A L\n");
  printf("--------------------\n");

  
  




return 0;
  
}








