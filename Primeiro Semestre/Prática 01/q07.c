#include <stdio.h>
#include <math.h>

int main(){

    float altura, distancia, angulo, seno;

    distancia = 20;
    angulo = 45;

    angulo = angulo * (M_PI/180);
    seno = sin(angulo);
    altura = distancia * seno;
    printf("O avião se encontra a uma altura de %0.02f metros do chão!",altura);

    return 0;
}