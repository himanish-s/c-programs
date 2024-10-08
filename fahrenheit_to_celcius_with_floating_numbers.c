/* In previous program we
   declared all variables by int
   and multiplied (5/9) to (fahr-32)

   Here we'll declare variables by float
   then multiply (5.0/9.0) to (fahr-32)
*/

#include<stdio.h>

/*  print Fahrenheit-Celcius table
    for fahr= 0, 20, 40, ...    
*/
int main(){

    //printf("\033c");

    float fahr,  celcius;
    float lower, upper,  step;

    lower = -100;
    upper = 300;
    step  = 20;

    fahr = lower;
    while (fahr <= upper) {
        celcius = (5.0/9.0) * (fahr-32.0);
        // you might see that floats are used here

        printf("%10.0f %10.1f\n", fahr, celcius);

        fahr = fahr + step;

    }
}