#include<stdio.h>
int main(void){
    int num1,num2,num3;
    printf("please enter first  number: ");scanf("%d",&num1);
    printf("please enter second number: ");scanf("%d",&num2);
    printf("please enter third  number: ");scanf("%d",&num3);
    ((num1>num2) && (num1>num3))?\
    printf("%d is  greater",num1):\
    printf("%d is greater",num3);
}
