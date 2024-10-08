/*
 * =====================================================================================
 *
 *       Filename:  simple_interest.c
 *
 *    Description: program to find simple interest 
 *
 *        Version:  1.0
 *        Created:  08/24/2022 12:53:44 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */
#include <stdlib.h>
#include <stdio.h>
int main(void){
  int principle,rate,time,si;
  printf("enter principle amount: ");scanf("%d",&principle);
  printf("enter rate of interest: ");scanf("%d",&rate);
  printf("enter time period     : ");scanf("%d",&time);
  si=(principle*rate*time)/100;
  printf("simple interest is: %d\n",si);
}
