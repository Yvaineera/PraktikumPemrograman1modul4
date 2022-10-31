#include <stdio.h>

void main(){
    int a, b, i, j;
    scanf("%d %d", &a, &b);

    if(a<b){
        for(i=a, j=b; i<=b, j>=a; i++, j--){
            printf("%d %d", i, j);
            if(i == b){break;}
            else{printf(" - ");}
        }
    }
    else {
        for(i=a, j=b; i>=b, j<=a; i--, j++){
            printf("%d %d", i, j);
            if(i == b){break;}
            else{printf(" - ");}
        }
    }

}