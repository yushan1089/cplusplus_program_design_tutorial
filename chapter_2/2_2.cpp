#include <stdio.h>

int main (){
    int a, b, d, min;
    printf("Enter two nums: ");
    scanf("%d %d", &a, &b);
    min = a> b ? b: a;
    for (d =2; d < min; d++)
        if( (a% d == 0) && (b%d ==0)) break;
    if( d == min){
        printf("no common denominators");
        return 0;
    }
    printf("The lowest denominator is %d" , d);
    return 0;
}