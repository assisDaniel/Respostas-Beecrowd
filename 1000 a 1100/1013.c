#include <stdio.h>
#include <math.h>
 
int main(void){
   int a, b, c;
   scanf("%d %d %d", &a, &b, &c);
   int MaiorAB= (a+b+abs(a-b))/2;
   int MaiorBC= (MaiorAB+c+abs(MaiorAB - c))/2;
   
   printf("%d eh o maior\n", MaiorBC);
}