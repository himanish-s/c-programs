#include<stdio.h>
int main(void){
    int row,col,gap,inp;
    printf("Please enter numberof rows: ");
    scanf("%d",&inp);printf("\n");
    for(row=1;row<=inp;row++){
        for(gap=inp;gap>=row;gap--){
        // let gap -eq inp (so input-number-of 
        // gaps are already printed )
        // let it go until it is 
        // greater than row loop
        // let it decrease eachtime by 1    
            printf(" ");
        }
        for(col=1;col<=row;col++){
            printf("*");
        }
        printf("\n");
           
    }printf("\n");
}