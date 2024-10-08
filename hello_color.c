#include<stdio.h>
int main(void){
    int i,j;
    for(i=1;i<108;i++){
        for(j=31;j<=37;j++){
            printf("\e[%d;%dm",i,j);
            printf("attr: %d color: %d\e[0m\n",i,j);
        }    
    }printf("\n");
}