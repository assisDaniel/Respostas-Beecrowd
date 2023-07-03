#include <stdio.h>

int organize(int *a, int *b, int *c){
    int temp;
    
    if(*a < *b && *a < *c){             
        if(*c < *b){
            temp= *c;
            *c= *b;
            *b= temp;
        }
    
    }else if(*b < *a && *b < *c){      
        temp= *a;
        *a= *b;
        *b= temp;
        if(*c < *b){
            temp= *c;
            *c= *b;
            *b= temp;
        }
    
    }else if(*c < *a && *c < *b){      
        temp= *a;
        *a= *c;
        *c= temp;
        if(*c < *b){
            temp= *c;
            *c= *b;
            *b= temp;
        }
    }
}
int main(void){
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);
    int olda= a, oldb= b, oldc=c;
    organize(&a, &b, &c);
    printf("%d\n%d\n%d\n\n", a, b, c);
    printf("%d\n%d\n%d\n", olda, oldb, oldc);
}