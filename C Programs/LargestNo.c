#include<stdio.h>
void main(){
    
    // largest no
    float a,b,c;
    printf("ENTER THREE NUMBERS :\n");
    scanf("%f %f %f",&a,&b,&c);
    if(a==b && a==c){
        printf("ALL ARE EQUAL\n");
    }else{
    (a>b && a>c)?printf("%.2f is greater\n",a):(b>c)?printf("%.2f is greater\n",b):printf("%.2f is greater\n",c);
    }
}