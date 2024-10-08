#include<stdio.h>
int main(void){
    int num1,num2;
    printf("enter first  number: ");scanf("%d",&num1);
    printf("enter second number: ");scanf("%d",&num2);
    printf("before swap num1 is %d and num2 is %d\n",num1,num2);
    num1=num1+num2;  // 1=1+2;  3=1+2 
    num2=num1-num2;  // 2=1-2; -1=1-2
    if (num2<0){
        num2=num2*(-1);
    }
    num1=num1-num2;  // 3=3--1;  3=4
    printf("after  swap num1 is %d and num2 is %d\n",num1,num2);
}   // swap in 14 lines ohhnoooooo  rev - 4