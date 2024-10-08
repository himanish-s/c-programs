#include<stdio.h>
int main(void){
    int num,sum;
    printf("please enter a number: ");
    scanf("%d",&num);
    sum=( (num)*(num+1) )/2;
    printf("sum of digits upto %d is ",num);
    printf("%d\n",sum);
}