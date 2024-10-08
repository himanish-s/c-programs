#include<stdio.h>
int main(void){
    int x,y,z,a,b,c,m,n;
    printf("Enter X value: ");scanf("%d",&x);
    printf("Enter Y value: ");scanf("%d",&y);
    printf("Enter Z value: ");scanf("%d",&z);
    a = (x>=10  ? 2:3);
    printf("\nCalculated Value of a is: %d\n",a);
    b = (y<=20  ? 17:18);
    printf("\nCalculated Value of b is: %d\n",b);
    c = (z==30  ? 36:54);
    printf("\nCalculated Value of c is: %d\n",c);
    m = x+y+z;
    printf("\nThe sum of x,y,z is: %d\n",m);
    n = a+b+c;
    printf("\nThe sum of a,b,c is: %d\n",n);
    printf("\n%s", m!=n ? "m and n are not equal" : "m and n are equal");
    printf("\n\n");
}