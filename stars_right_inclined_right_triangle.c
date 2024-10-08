#include<stdio.h>
int main(void){
    int row,col,inp; //col is short for column
    printf("Please enter number of rows: ");
    scanf("%d",&inp);puts("");
    for(row=1;row<=inp;row++){
        for(col=1;col<=row;col++){
            printf("*");
        }
        printf("\n");
    }printf("\n");
}