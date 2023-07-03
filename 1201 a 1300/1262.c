#include <stdio.h>
#include <string.h>

char *howManyRs(char *str, char* newStr){
    int added=0;
    for(int i=0; i< strlen(str); i++){
        if(str[i]== 'R'){
            newStr[added]= 'R';
            added++;
        }
    }
    newStr[added]= '\0';
    return newStr;
}

int main(void){
    char idk[50], new[50];
    int processo, cont=0, rptd;

    while(scanf("%s", idk)!= EOF){
        puts(idk);
        scanf("%d", &processo);
        strcpy(new, howManyRs(idk, new));
        puts(new);
        rptd= processo - (strlen(new)%processo);
        printf("Rptd =%d\n", rptd);
        for(int i=0; i< strlen(idk); i++){
            if(idk[i]== 'W'){
                cont++;
            }
        }
        printf("Cont= %d\n", cont);
        printf("%d\n", cont+rptd);
        cont=0;
    }
}