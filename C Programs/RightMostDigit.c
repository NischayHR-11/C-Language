#include<stdio.h>
void main(){
    
    //right most digit of integral part in floating number
    float n;int x,y;
    printf("ENETR THE FLOATING NUMBER:");
    scanf("%f",&n);
    x=(int)n;y=x%10;
    printf("RIGHT MOST DIGIT OF INTEGRAL PART OF FLOATING NUMBER: %d",y);
}