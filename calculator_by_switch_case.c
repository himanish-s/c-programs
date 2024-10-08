#include<stdio.h>
int main(void){
    int num1,num2,add_sol,sub_sol,mul_sol,div_sol,sign;
    
    printf("please enter first  number: ");
    scanf("%d",&num1);
    printf("please enter second number: ");
    scanf("%d",&num2);
    
    printf("\nenter 1 for add");
    printf("\nenter 2 for sub");
    printf("\nenter 3 for mul");
    printf("\nenter 4 for div");
    printf("\nenter your choice: ");
    scanf("%d",&sign);
    
    switch(sign){
        
        case 1:
        add_sol=num1+num2;
        printf("addition is: %d",add_sol);
        break;

        case 2:
        sub_sol=num1-num2;
        printf("difference is: %d",sub_sol);
        break;

        case 3:
        mul_sol=num1*num2;
        printf("multiply is: %d",mul_sol);
        break;

        case 4:
        div_sol=num1/num2;
        printf("division is: %d",div_sol);
        break;

        default:
        printf("Default exec");
        break;
    }printf("\n");
}