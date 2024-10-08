#include<stdio.h>
int main(void){
    int num,num1;
    printf("Enter any value above or below 5: ");
    scanf("%d",&num);
    num1 = (num>5 ? 7:3);
    printf("Calculated Value of num1: %d\n",num1);
}