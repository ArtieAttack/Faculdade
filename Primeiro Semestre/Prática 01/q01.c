#include <stdio.h>

int main() {

  float a1 = 5.0f;
  printf("A notas de A1 = %f\n ",a1);
  float a2 = 8.5f;
  printf("e A2 = %f\n ",a2);

  float media = (a1 * 0.4) + (a2 * 0.6);
  
  printf("tem como média igual a %f\n", media);

  return 0;
}