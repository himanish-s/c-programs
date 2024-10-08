#include<stdio.h>
int main(void){
    int n,i,fact=1;
    printf("Enter any no: ");
    scanf("%d",&n);
    for(i=n;i>=1;i--){
        fact=fact*i;
    }
    printf("prod of fact=%d\n",fact);
}

// 4 = 1,2,4
// 9 = 1,3,9