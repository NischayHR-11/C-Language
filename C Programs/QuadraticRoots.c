#include<stdio.h>
#include<math.h>
void main(){
    printf("------------------------ QUADRATIC EQUATION ROOTS ----------------------\n\n ");
    double a,b,c,d,root1,root2;
    int i=-1;
    printf("ENTER THE COEFFICENTS OF QUADRATIC EQUATION:");
    scanf("%lf %lf %lf",&a,&b,&c);
    d=(b*b)-(4*a*c);
    if(d==0){
        root1=-b/2*a;
        printf("THE roots are REAL AND EQUAL:\nROOT 1:%.3lf\nROOT 2:%.3lf\n",root1,root1);
    }
    else if(d>0){
        root1=(-b + sqrt(d))/2*a;
        root2=(-b - sqrt(d))/2*a;
        printf("THE roots are REAL AND DISTINCT:\nROOT 1:%.3lf\nROOT 2:%.3lf\n",root1,root2);
    }
    else{
        d=i*d;
        double h=-b/2*a;
        double z=sqrt(d)/2*a;
        printf("THE roots are IMAGINARY:\nROOT 1:%.3lf\nROOT 2:%.3lf\n",h,z);
    }

    printf("-----------------------------------------------------------------------------\n");


}