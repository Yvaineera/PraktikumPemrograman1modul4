#include <stdio.h>

void main(){
    int n =  50, a, i, s;
    scanf("%d %c", &a, &s);
    for(i=1; i<=n; i++){
        if(i%a == 0){printf("%c ", s);}
        else {printf("%d ", i);}}
}