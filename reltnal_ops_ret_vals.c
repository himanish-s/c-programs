#include<stdio.h>
int main(void){
    printf("\033c");
    printf("\n Conditional    :   return values\n");
    printf("\n 10!=10         :  %5d",10!=10);
    printf("\n 10==10         :  %5d",10==10);
    printf("\n 10<=10         :  %5d",10<=10);
    printf("\n 10>=10         :  %5d",10>=10);
    printf("\n 10!=9          :  %5d",10!=9);
    printf("\n 10==2           :  %5d",10==2);
    puts("");
}