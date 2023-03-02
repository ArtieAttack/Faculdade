#include <stdio.h>

int main() {
  
  int anos, meses, dias, tempo_dias;
  anos = 5;
  meses = 10;
  dias = 55;

  tempo_dias = (anos * 365) + (meses * 30) + dias;

  printf("Seram %d anos, %d meses e %d dias são igual a %d dias",anos, meses, dias, tempo_dias);

  return 0;
}