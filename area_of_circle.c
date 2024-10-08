/*
 * =====================================================================================
 *
 *       Filename:  area_of_circle.c
 *
 *    Description: finds area of a circle 
 *
 *        Version:  1.0
 *        Created:  08/24/2022 12:34:27 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  TheOrganisation
 *
 * =====================================================================================
 */
#include <stdlib.h>
#include <stdio.h>

int main(void){
  
  int radius;
  float area,circumference,pi=3.14;

  printf("enter the radius of circle: ");
  scanf("%d",&radius);
  
  area=pi*radius*radius;
  circumference=2*pi*radius;

  printf("Area of circle is: %f\n",area);
  printf("Circumference of circle is: %f\n",circumference);
} 
