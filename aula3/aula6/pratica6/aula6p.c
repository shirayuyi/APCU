#include <stdio.h>
#include <math.h>

int main(){

//Faça um programa em C que converta um valor qualquer em Gigabytes para um valor em bytes (1GB = 1024³Bytes)

double Byte = 1024;
double Kbyte = (pow(Byte, 2));
double GB = (pow(Byte, 3));

  
  printf("Insira o tamanho do SSD: ");
  int deu_certo = scanf("%lf", &GB);

  printf("Seu SSD em bytes equivale a: %lf\n", GB);
  printf("Seu SSD em bytes equivale a: %lf\n", Kbyte);

  //Faça um programa em C que calcule a altura alcançada por um avião após ter percorrido uma certa distância (seno(ângulo) = altura/distância). Considere o ângulo de inclinação do avião menor ou igual a 45º
  
int alt;
int dist;
  double PI = 3.14;

  printf("Insira a altura alcançada pelo avião: \n");
  int deu_certoa = scanf("%i", &alt);

  printf("Insira a distância percorrida pelo avião: \n");
  deu_certoa = scanf("%i", &dist);
  
  printf("Seu avião alcançou: ");
  //completar em casa
  





  


return 0;
  
}













