#include <stdio.h>

int main(void){
    int cod, qty;

    scanf("%d%d", &cod, &qty);
    if(cod==1) printf("Total: R$ %.2f\n", (float)4*qty);
    else if(cod==2) printf("Total: R$ %.2f\n", (float)4.5*qty);
    else if(cod==3) printf("Total: R$ %.2f\n", (float)5*qty);
    else if(cod==4) printf("Total: R$ %.2f\n", (float)2*qty);
    else if(cod==5) printf("Total: R$ %.2f\n", (float)1.5*qty);
}