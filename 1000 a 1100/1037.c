#include <stdio.h>

int main(void){
    float x;

    scanf("%f", &x);
    if(x>=0.00){
        if(x<=25.00) printf("Intervalo [0,25]\n");
        else if(x<=50.00) printf("Intervalo (25,50]\n");
        else if(x<=75.00) printf("Intervalo (50,75]\n");
        else if(x<=100.00) printf("Intervalo (75,100]\n");
        else printf("Fora de intervalo\n");
    }else printf("Fora de intervalo\n");
}