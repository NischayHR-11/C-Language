#include<stdio.h>
void main(){
        //swap
    float x,y,z,t;
    printf("ENTER THE VALUES OF X,Y & Z :");
    scanf("%f %f %f",&x,&y,&z);
    t=x;x=y;y=z;z=t;
    printf("SWAPED NUMBERS :%.2f %.2f %.2f",x,y,z);
}