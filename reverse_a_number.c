#include<stdio.h>
int main(void){
    int num,rem,bag;
    printf("enter number: ");scanf("%d",&num);
    printf("reverse is: ");
    while(num>0){
        rem=num%10;
        num=num/10;
        printf("%d",rem);
        bag=bag*10+rem;   /*this hole line can be //  */
    }
    printf("\nbag is %d\n",bag);
}   // rev - 15