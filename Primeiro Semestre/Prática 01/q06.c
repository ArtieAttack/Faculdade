#include <stdio.h>
#include <math.h>
int main(){
    
    float delta, x1, x2, raiz_delta;
    float a = 2;
    float b = 9;
    float c = 4;

    delta = (b*b) - (4 * (a*c));

    raiz_delta = (delta);

    x1 = (-b + raiz_delta) / (2*a);

    x2 = (-b - raiz_delta) / (2*a);

    
    printf("Seu delta é %f\n",delta);
        printf("Logo X1: %0.02f \n",x1);
        printf("E X2: %0.02f \n",x2);
  
    
    return 0;
}