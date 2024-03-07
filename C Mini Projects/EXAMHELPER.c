//EXAM HELPER 

#include<stdio.h>
void main(){

    float n,req,req1;
    printf("ENTER YOUR INTERNAL MARKS :\n");
    scanf("%f",&n);
    req=(90-n)/.6;
    req1=(75-n)/.6;
    printf("MARKS REQUIRED FOR 'S' GRADE :%.2f\n\n",req);
    printf("MARKS REQUIRED FOR 'A' GRADE :%.2f\n\n",req1);

}