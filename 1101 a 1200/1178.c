#include <stdio.h>

int main(void){
    double v[100];

    scanf("%lf", &v[0]);
    for(int i=1; i<100; i++) v[i]= v[i-1]/2;
    for(int i=0; i<100; i++) printf("N[%d] = %.4lf\n", i, v[i]);
}