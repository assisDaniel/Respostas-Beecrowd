#include <stdio.h>
 
int main(void) {
    char nome[60];
    double salFixo, montanTot;

    fgets(nome, 60, stdin);
    scanf("%lf %lf", &salFixo, &montanTot);
    
    printf("TOTAL = R$ %.2lf\n", salFixo+(montanTot*0.15));
}