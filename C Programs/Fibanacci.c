#include<stdio.h>
void main(){
printf("--------------FIBANACCI SERIES-------------\n");
int n,first=0,second=1,third;
printf("ENTER THE NUMBER:\n");
scanf("%d",&n);
printf("fibanacci series till %d term is:\n",n);
printf("%d\t %d\t",first,second);
for(int i=2;i<=n;i++){
    third=first+second;
    printf("%d\t",third);
    first=second;
    second=third;
}
printf("\n");
printf("---------------------------------------------\n");
}