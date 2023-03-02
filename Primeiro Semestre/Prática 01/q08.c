#include <stdio.h>

int main() {
  
  int seg, min, hora, resto;
  seg = 1200;
  printf("%d segundos, ",seg);

  hora = seg / 3600;
  resto = seg % 3600;
  min = seg / 60;
  seg = resto % 60;

  printf("serão igual a %d horas, %d minutos e %d segundos.",hora,min,seg);

  return 0;

}