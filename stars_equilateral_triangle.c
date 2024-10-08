#include<stdio.h>
int main(void){
    int ver,hor,gap,inp;
    printf("please enter number of lines: ");
    scanf("%d",&inp);
    for(ver=1;ver<=inp;ver++){
        for(gap=inp;gap>=ver;gap--){
            printf(" ");
        }
        for(hor=1;hor<=(ver*2)-1;hor++){
            printf("*");
        }
        printf("\n");
    }
}