 #include<stdio.h>
 #include<math.h>
 #include<stdlib.h>
 void main(){
 printf("---------------------------------------- CALCULATOR ----------------------------------------\n");
    do{
    int n;
    printf("\n");
    printf("ENTER THE CHOICE:\n");
    printf("1.addition\n");
    printf("2.subtraction\n");
    printf("3.multiplication\n");
    printf("4.division\n");
    printf("5.remender\n");
    printf("6.quadratic roots\n");
    printf("7.exit\n");
    scanf("%d",&n);
    float a,b,c,d,root1,root2;int e,f;
    switch(n){
        case 1:
        printf("---------------------------------------------\n");
        printf("ENTER NUMBERS FOR ADDITION:\n");
        scanf("%f %f",&a,&b);
        printf("SUM OF NUMBERS :%.2f\n",a+b);
        printf("---------------------------------------------\n");
        break;
        case 2:
        printf("---------------------------------------------\n");
        printf("ENTER NUMBERS FOR subtraction:\n");
        scanf("%f %f",&a,&b);
        printf("DIFFERENCE OF NUMBERS :%.2f\n",a-b);
        printf("---------------------------------------------\n");
        break;
        case 3:
        printf("---------------------------------------------\n");
        printf("ENTER NUMBERS FOR multiplication:\n");
        scanf("%f %f",&a,&b);
        printf("PRODUCT OF NUMBERS :%.2f\n",a*b);
        printf("---------------------------------------------\n");
        break;
        case 4:
        printf("---------------------------------------------\n");
        printf("ENTER NUMBERS FOR division:\n");
        scanf("%f %f",&a,&b);
        printf("DIVISION :%.2f\n",a/b);
        printf("---------------------------------------------\n");
        break;
        case 5:
        printf("---------------------------------------------\n");
        printf("ENTER A and B:\n");
        scanf("%d %d",&e,&f);
        printf("A MOD B :%.2f\n",e%f);
        printf("---------------------------------------------\n");
        break;
        case 6:
        printf("---------------------------------------------\n");
        printf("ENETR THE COEFFICIENTS A,B &C:");
        scanf("%f %f %f",&a,&b,&c);
        d=(b*b)-(4*a*c);
        if(d==0){
            printf("ROOTS ARE REAL AND EQUAL:\n");
            printf("D:%.2f\n",d);
            root1=(-b)/2*a;
            printf("ROOT1:%.2f\nROOT2:%.2f\n",root1,root1);
            }else if(d>0){
                printf("ROOTS ARE REAL AND DISTINCT:\n");
                printf("D:%.2f\n",d);
                root1=((-b)+sqrt(d))/2*a;
                root2=((-b)-sqrt(d))/2*a;
                printf("ROOT1:%.2f\nROOT2:%.2f\n",root1,root2);
            }else{
                printf("D:%.2f\n",d);
                printf("ROOTS ARE IMAGINARY:\n");
                int i=-1;
                root1=(-b)/2*a;
                root2=sqrt(d*i)/2*a;
                printf("ROOT1:%.2f\nROOT2:%.2f\n",root1,root2);}
        printf("---------------------------------------------\n");
        break;
        case 7:
        printf("************ THANK YOU ************\n");
        printf("--------------------------------------------------------------------------------------------\n");
        exit(0);   


    }
}while(1);
}