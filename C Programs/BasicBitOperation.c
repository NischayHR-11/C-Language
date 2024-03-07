#include<stdio.h>
void main(){
        // bit wise
    unsigned int n1,s,n,c,d,e,f,g,h;
    printf("ENTER THE NUMBERS A and B :\n");
    scanf("%d %d",&n,&n1);c=n&n1;d=n|n1;e=~n;
    printf("ENETR THE NUMBER FOR SHIFT :\n");
    scanf("%d",&s);
    f=n>>s;g=n<<s;h=n^n1;
    printf("A&B :%d\nA|B:%d\n~A:%d\nA>>n:%d\nA<<n:%d\nA^B:%d\n",c,d,e,f,g,h);
}