#include<stdio.h>
int main(void){
    int n,i,sum=0;
    printf("Enter any number: ");
    scanf("%d",&n);
    printf("1");
    for(i=2;i<=n-1;i++){
        printf(" 1%d +",i);
    }
    for(i=1;i<=n;i++){
        sum=sum+1;
        printf(" 1%d",n);
        printf("\nSum=1/%d\n",sum+1/n);
    }
}