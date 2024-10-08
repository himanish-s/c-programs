#include<stdio.h>
int main(void){
    int mark1,mark2,sum,total;
    float percentage;
    printf("enter marks: ");scanf("%d %d",&mark1,&mark2);
    printf("enter total: ");scanf("%d",&total);
    sum=(mark1+mark2);
    percentage=(sum*100)/total;
    printf("percentage is %f\n",percentage);
}   // percentage in 10 lines :-( rev - 4