#include<stdio.h>
int main(void){
    int num;
    printf("please enter a number: ");scanf("%d",&num);
    printf("%d is ",num);
    (num%2 == 0)?printf("even"):printf("odd");
    printf("\n");
}//even or odd in one line 