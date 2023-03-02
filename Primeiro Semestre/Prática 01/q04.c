#include <stdio.h>

int main() {
  
  float pInicial = 150.0f;
  float icms = 0.17f;
  float cofins = 0.076f;
  float pPasep = 0.0165f;

  int pFinal = (1 + icms + cofins + pPasep) * pInicial;
  
  printf("O preço final será de %d reais!", pFinal);

  return 0;
}