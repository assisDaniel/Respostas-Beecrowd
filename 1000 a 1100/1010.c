#include <stdio.h>
 
int main(void){
    int cod, num, cod2, num2;
    float value, value2;
    
    scanf("%d%d%f", &cod, &num, &value);
    scanf("%d%d%f", &cod2, &num2, &value2);
    
    printf("VALOR A PAGAR: R$ %.2f\n", (num*value)+(num2*value2));
}