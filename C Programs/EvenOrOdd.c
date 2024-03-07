#include<stdio.h>
void main(){
    
    // even or odd
    int n;
    printf("ENTER THE NUMBER : ");
    scanf("%d",&n);
    (n%2==0)?printf("%d IS EVEN",n):printf("%d IS ODD",n);

    // &
    printf("ENTER THE NUMBER : ");
    scanf("%d",&n);
    (n&1==1)?printf("%d IS ODD",n):printf("%d IS EVEN",n);
}