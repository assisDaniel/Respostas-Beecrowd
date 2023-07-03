#include <stdio.h>
 
int main(void) {
    double r;
    
    scanf("%lf", &r);
    
    printf("VOLUME = %.3lf\n", (4*3.14159*(r*r*r))/3);
}