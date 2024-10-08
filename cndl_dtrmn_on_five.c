#include<stdio.h>
int main(void){
    short num0,num1;
    printf("Enter any value or 5: ");
    scanf("%d",&num0);
    num1 = (num0==5 ? 3:4);
    printf("Calculated Value of num0 is: %d",num1);
    printf("\n");
}