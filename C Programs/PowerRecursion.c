#include<stdio.h>
int power(int n,int m);
int main(){
    int n,m;
    printf ("ENTER THE NUMBERS:");
    scanf("%d %d",&n,&m);
    printf("%d",power(n,m));

return 0;
}
int power(int n,int m){
    if(m==1){
        return n;

    }
    return n*power(n,m-1);
}