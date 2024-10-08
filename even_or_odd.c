#include<stdio.h>
int main(void){
    int num;
    printf("please enter a number: ");scanf("%d",&num);
    printf("\e[91m%d is ",num);
    if (num%2 == 0){
      printf("even number");
    }else{
      printf("odd number");
    }
    printf("\e[0m\n");
}
