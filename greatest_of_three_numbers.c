#include<stdio.h>
int main(void){
    int num1,num2,num3;
    printf("please enter first  number:");scanf("%d",&num1);
    printf("please enter second number:");scanf("%d",&num2);
    printf("please enter third  number:");scanf("%d",&num3);
    if( (num1>num2) && (num1>num3) ){
        printf("%d is greatest number",num1);
    }
    if( (num2>num1) && (num2>num3) ){
        printf("%d is greatest number",num2);
    }
    if( (num3>num1) && (num3>num2) ){
        printf("%d is greatest number",num3);
    }
    printf("\n");
}