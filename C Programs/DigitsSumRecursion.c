#include<stdio.h>
int sumdigits(int n);
int main(){
    int n;
    printf("ENTER THE NUMBER:");
    scanf("%d",&n);

    printf("%d",sumdigits(n));

return 0;
}
int sumdigits(int n){
    if(n==0){
        return 0;
    }
    return n%10+sumdigits(n/10);
}