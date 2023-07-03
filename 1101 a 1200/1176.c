#include <stdio.h>

int main(void){
    unsigned long long fib[61], n, x;
    fib[0]=0; fib[1]=1;
    for(int j=2; j<=60; j++) fib[j]= fib[j-2]+ fib[j-1];

    scanf("%llu", &n);
    for(int i=0; i<n; i++){
        scanf("%llu", &x);
        printf("Fib(%llu) = %llu\n", x, fib[x]);
    }
}