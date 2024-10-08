#include<stdio.h>
int main(void){
    int a=1,b=1,c=0,num,i;
    printf("Please enter a number:");
    scanf("%d",&num);
    printf("\n");
    for(i=0;i<=10;i++){
        c=a+b;
        if(c<num){
            printf("%d\n",c);
        }
        a=b;
        b=c;
    }printf("\n");
}