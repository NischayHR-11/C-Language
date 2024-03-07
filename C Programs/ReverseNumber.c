#include<stdio.h>
void main(){
    printf("----------------- TO REVERSE NUMBER----------------\n");
    int n,i,rev=0,rem,n1;
    printf("ENTER THE NUMBER:\n");
    scanf("%d",&n);
    n1=n;
    for(;n>0;i++){
        rem=n%10;
        rev=rev*10+rem;
        n=n/10;
        }
    printf("REVERSE NUMBER IS:%d\n",rev);
    if(n1==rev)
    printf("%d IS A PALANDROME NUMBER.",n1);
    else
    printf("%d IS NOT A PALANDROME NUMBER.",n1);
    printf("\n");
    printf("----------------------------------------------------\n");

}