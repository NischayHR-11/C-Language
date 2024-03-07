#include<stdio.h>
void main(){
        //integral and decimal number
    float n,d;int x;
    printf("ENTER THE FLOATING NUMBER:");
    scanf("%f",&n);
    x=(int)n; d=n-x;
    printf("INTEGRAL PART:%d\nDECIMAL PART:%.2f\n",x,d);
}