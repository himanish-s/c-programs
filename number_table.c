#include<stdio.h>
int main(void){
    int num,inc,res;
    printf("enter a number: ");
    scanf("%d",&num);
    for(inc=0;inc<=10;inc++){
        res=num*inc;
        printf("%d*%d=%d\n",num,inc,res);
    }
    printf("\n");
}