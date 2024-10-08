#include<stdio.h>
int main(void){
    int i=0,r,n,c;
    printf("throw a number: ");scanf("%d",&n);
    while(n>=1){
        r=n%10;
        n=n/10;
        printf("%d",r);
        c++;
    }   printf("%d\n",c);
    int arr[c];
    while(n>=1){
        r=n%10;
        n=n/10;
        arr[i]=r;
    }
    for(i=0;i<=c;i++){
        printf("%d",arr[i]);
    }
    printf("\n");
}