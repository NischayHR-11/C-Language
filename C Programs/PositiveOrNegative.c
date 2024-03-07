#include<stdio.h>
void main(){
        // positive  or negative
    float n;
    printf("ENETR THE NUMBER :");
    scanf("%f",&n);
    (n>0)?printf("GIVEN NUMBER IS POSITIVE"):(n==0)?printf("NUMBER IS NEITHER POSITIVE NOR NEGATIVE"):printf("GIVEN NUMBER IS NEGATIVE");
}