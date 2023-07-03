#include <stdio.h>
#include <stdbool.h>
#include <math.h>

bool exist(float a, float b, float c){
    if((b+c)>a) return true;
    return false;
}

int main(void){
    float a,b,c;
    scanf("%f%f%f", &a, &b, &c);

    if(exist(a, b, c) && exist(b, a, c) && exist(c, a, b)) printf("Perimetro = %.1f\n", a+b+c);
    else printf("Area = %.1f\n", ((a+b)*c)/2);
}