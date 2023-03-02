#include <stdio.h>

int main() {
  
  float pi = 3.1416f;
  int raio = 5;
  printf("O raio de %d centimetros tem como ",raio);

  int perimetro = (2.0f * pi * raio);

  printf("seu perímetro igual a %d centimetros!", perimetro);
  
  return 0;
}