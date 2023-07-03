#include <stdio.h>
 
int main(void){
    int x, ano=0, mes=0, dia=0;
    
    scanf("%d", &x);
    while(x!=0){
        if(x>=365){
            ano= x/365;
            x%=365;
        }else if(x>=30){
            mes= x/30;
            x%=30;
        }else{
            dia= x;
            x%=1;
        }
    }
    printf("%d ano(s)\n", ano);
    printf("%d mes(es)\n", mes);
    printf("%d dia(s)\n", dia);
}