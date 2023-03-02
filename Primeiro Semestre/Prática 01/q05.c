#include <stdio.h>

int main() {
  
  float gigas, bytes;
  gigas = 32;
  bytes = gigas * (1024*1024*1024);
  
  printf("%0.02f Gigabytes, convertido será %0.02f bytes",gigas,bytes);

  return 0;
}