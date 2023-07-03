#include <stdio.h>

int main(void){
    int v[20], reverse[20];
    int size= 19;

    for(int i=0; i<20; i++){
        scanf("%d", &v[i]);
        reverse[size]= v[i];
        size--;
    }
    for(int i=0; i<20; i++) printf("N[%d] = %d\n", i, reverse[i]);
}