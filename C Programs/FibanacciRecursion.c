#include<stdio.h>
int fib(int a,int b,int n);
void main(){
    int a=0,b=1;
    int n=7;
   printf("%d\t %d\t",a,b);
   fib(a,b,n-2);

}
int fib(int a,int b,int n){
    if(n==0)
    return 1;
    int c=a+b;
    printf("%d\t",c);
    fib(b,c,n-1);

}
// 0 1 1 2 3 5 8