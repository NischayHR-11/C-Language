#include<stdio.h>
void main(){
    printf("---------------- BUBBLE SORTING -----------------\n");
    int a[100],n;
    printf("ENTER THE SIZE OF ARRAY :\n");
    scanf("%d",&n);
    printf("ENTER THE ELEMENTS:\n");
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    printf("THE GIVEN ARRAY IS:\n");
    for( int i=0;i<n;i++)
    printf("%d\t",a[i]);
    printf("\n");
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(a[j]>a[j+1]){
                int t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;
            }
        }
    }
    printf("THE SORTED ARRAY IS :\n");
    for(int i=0;i<n;i++)
    printf("%d\t",a[i]);
    printf("\n");
    printf("------------------------------------------------------\n");
}