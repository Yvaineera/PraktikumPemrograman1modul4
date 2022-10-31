#include <stdio.h>

void main(){
    int a, b, i, j, o, p, q, hsl, t;

    scanf("%d %d", &a, &b);
    for(i = 1; i <= a; i++){
        for(j = i; j > 1; j--){printf("(%d * %d) +", j, b);}
        for(o = 1, hsl = o * b; o < i; o++, hsl += (o*p));{
        printf("(%d * %d) = %d\n", j, b , hsl);}
    for(p = 1, q = 1, t = 0; p <= a; q += p + 1, p++){
        t += q * b;}}
    printf("%d", t);
}