#include<stdio.h>
int main(void){
    short    x=2;
    float  y=2.097;
    printf("\033c");
    printf("Size_of_x is: %d\n",sizeof(x));
    printf("Size_of_y is: %d\n",sizeof(y));
    printf("Address of x=%u and y=%u\n",&x,&y);
}