#include<stdio.h>
int main(void){
    int num1,num2;
    printf("please enter a number: ");scanf("%d",&num1);
    num2=num1<<3;
    printf("you entered: %d\n",num1);
    printf("after shifting: %d\n",num2);
}