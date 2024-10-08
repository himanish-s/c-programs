#include<stdio.h>
int main(void){
    int a,z,x=1,y=2;
    z=x*++y;
    a=x*y;
    printf("z: %d, a: %d\n",z,a);

}