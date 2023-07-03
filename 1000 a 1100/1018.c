#include <stdio.h>
 
int main(void){
    int valor, valor2, ced100=0, ced50=0, ced20=0, ced10=0, ced5=0, ced2=0, ced1=0;
    scanf("%d", &valor);
    valor2= valor;
    while(valor!=0){
        if(valor>=100){
            ced100= valor/100;
            valor%=100;
        }else if(valor>=50){
            ced50= valor/50;
            valor%=50;
        }else if(valor>=20){
            ced20= valor/20;
            valor%=20;
        }else if(valor>=10){
            ced10= valor/10;
            valor%=10;
        }else if(valor>=5){
            ced5= valor/5;
            valor%=5;
        }else if(valor>=2){
            ced2=valor/2;
            valor%=2;
        }else{
            ced1= valor/1;
            valor%=1;
        }
    }
    printf("%d\n", valor2);
    printf("%d nota(s) de R$ 100,00\n", ced100);
    printf("%d nota(s) de R$ 50,00\n", ced50);
    printf("%d nota(s) de R$ 20,00\n", ced20);
    printf("%d nota(s) de R$ 10,00\n", ced10);
    printf("%d nota(s) de R$ 5,00\n", ced5);
    printf("%d nota(s) de R$ 2,00\n", ced2);
    printf("%d nota(s) de R$ 1,00\n", ced1);
}