#include <stdio.h>

int main(void){
    int num, ht;
    float wage;
    
    scanf("%d%d%f", &num, &ht, &wage);
    
    printf("NUMBER = %d\n", num);
    printf("SALARY = U$ %.2f\n", ht*wage);
}