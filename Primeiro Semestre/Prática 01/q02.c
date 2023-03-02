#include <stdio.h>

int main() {

  int base, altura;
  base = 10;
  printf("A base de %d metros e ",base);
  altura = 5;
  printf("sua altura de %d metros, ",altura);
  
  int area = (base * altura / 2);

  printf("sua área será de %d metros!", area);
  
  return 0;
}