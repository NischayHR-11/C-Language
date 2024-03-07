#include<stdio.h>
#include<stdlib.h>
 void ebill(char ch[20],int mn,float units);
 void tbill(char ch[20],int mn,float units);
void main(){
    printf("-------------------------------------------------------------------------\n\n");
    printf(" ****************** WELCOME TO MAIN MENUE ****************\n");
    char c[20];
    int mn,n;float units;
    do{
    printf("ENTER THE CHOICE:\n");
    printf("1.ELECTRIC BILL\n");
    printf("2.TELEPHONE BILL\n");
    printf("3.EXIT\n");
    scanf("%d",&n);
    switch(n){
        case 1:
        printf("        YOUR CHOICE IS ELECTRIC BILL      \n\n");
        printf("PLEASE ENTER YOUR NAME:\n");
        scanf("%s",c);
        printf("PLEASE ENTER YOUR METER NUMBER:\n");
        scanf("%d",&mn);
        printf("PLEASE ENTER NUMBER OF UNITS CONSUMED:\n");
        scanf("%f",&units);
        ebill(c,mn,units);
        printf("\n");
        break;
        case 2:
        printf("        YOUR CHOICE IS TELEPHONE BILL      \n\n");
        printf("PLEASE ENTER YOUR NAME:\n");
        scanf("%s",c);
        printf("PLEASE ENTER YOUR METER NUMBER:\n");
        scanf("%d",&mn);
        printf("PLEASE ENTER NUMBER OF UNITS CONSUMED:\n");
        scanf("%f",&units);
        tbill(c,mn,units);
        printf("\n");
        break;
        case 3:
        printf("************************** THANK YOU *************************\n\n");
        printf("---------------------------------------------------------------------------------\n");
        exit(0);

        default:
        printf("INVALID ENTRY !!,PLEASE TRY AGAIN\n\n");
    }


    }while(1);
    }
void tbill(char ch[20],int mn,float units){
    float amount;
    if(units<=100){
    amount=75+units*.95;
    }else if(units>100 && units<175){
    amount=75+95+(units-100)*1.5;
    }else{
        amount=75+95+(75*1.5)+(units-175)*2.85; 
    }
    if(amount>500)
    amount=amount+.125*amount;
    printf("------------------- TELEPHONE BILL ----------------\n\n");
    printf("NAME OF CANDIDATE IS :                      %s\n",ch);
    printf("METER NUMBER OF CANDIDATE IS :              %d\n",mn);
    printf("NUMBER OF UNITS CONSUMED BY CANDIDATE IS :  %.3f\n",units);
    printf("SERVICE CHARGE IS:                          75\n");
    printf("TOTAL AMOUNT CHARGED IS :                   %.3f\n\n",amount);
    printf("-----------------------------------------------------\n");

}
 void ebill(char ch[20],int mn,float units){
    float amount;
    if(units<=200){
    amount=100+units*.8;
    }else if(units>200 && units<300){
    amount=100+80+(units-200)*.9;
    }else{
        amount=100+80+90+(units-300)*1; 
    }
    if(amount>400)
    amount=amount+.15*amount;
    printf("------------------------- ELECTRIC BILL ----------------------\n\n");
    printf("NAME OF CANDIDATE IS :                       %s\n",ch);
    printf("METER NUMBER OF CANDIDATE IS :               %d\n",mn);
    printf("NUMBER OF UNITS CONSUMED BY CANDIDATE IS :   %.3f\n",units);
    printf("METER CHARGE IS:                             100\n");
    printf("TOTAL AMOUNT CHARGED IS :                    %.3f\n\n",amount);
    printf("-------------------------------------------------------------\n");
}

