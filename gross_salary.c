#include<stdio.h>
int main(void){
    /* declare */
    int basic_salary,gross_salary;
    int daily_addition,total_addition;
    /* ask and take basic_salary */
    printf("enter basic salary:");
    scanf("%d",&basic_salary);
    /* logic */
    daily_addition=(10*basic_salary)/100;
    total_addition=(12*basic_salary)/100;
    gross_salary=basic_salary+\
    daily_addition+total_addition;
    /* show gross_salary */
    printf("gross salary is: %d\n",gross_salary);
}   