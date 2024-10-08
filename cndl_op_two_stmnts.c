#include<stdio.h>
int main(void){
    printf("\033c");
    printf("hi: \n",3>2?puts("yes"):puts("no"));

}