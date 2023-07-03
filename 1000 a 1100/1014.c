#include <stdio.h>
 
int main(void){
    int x;
    float y;
    
    scanf("%d %f",&x, &y);
    
    float consumo= x/y;
    printf("%.3f km/l\n", consumo);
}