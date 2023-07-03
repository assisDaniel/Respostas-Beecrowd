#include <stdio.h>
 
int main(void){
    double a, b, c;
    
    scanf("%lf %lf %lf", &a, &b, &c);
    double aTri= (a*c)/2;
    double aCirc= 3.14159 *c*c;
    double aTrap= ((a+b)*c)/2;
    double aQuad= b*b;
    double aRet= a*b;
    
    printf("TRIANGULO: %.3lf\n", aTri);
    printf("CIRCULO: %.3lf\n", aCirc);
    printf("TRAPEZIO: %.3lf\n", aTrap);
    printf("QUADRADO: %.3lf\n", aQuad);
    printf("RETANGULO: %.3lf\n", aRet);
}