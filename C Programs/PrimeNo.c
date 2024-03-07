#include<stdio.h>
int main(){
    int n;
    printf("ENTER THE NUMBER :");
    scanf("%d",&n);
    int count=2,flag=1;
    while(count<n){
        if(n%count==0){
            flag=0;
            break;
        }
        count++;
    }
    if(flag==0)
    printf("%d the number is not prime\n",n);
    else
    printf("%d the number is prime\n",n);

return 0;
}