#include <stdio.h>

/* print Fahrenheit-Celcius table
/*   for fahr = 0, 20, ..., 300  */

int main(){
    
    int fahr,  celcius;
    int lower, upper,   step;

    printf("\033c"); /* clears screen */ 

    lower = 0;   /* lower limit of temperature scale */
    upper = 300; /* upper limit                      */ 
    step  = 20;  /* step size                        */
    
    fahr = lower;
    puts("without justification");   
    while (fahr <= upper) {
        
        celcius =  ( (fahr-32) * 5 ) / 9 ;        
        printf("%d\t%d\n", fahr, celcius);        
        fahr = fahr + step;
    
    }

    fahr = lower;
    puts("with left-justification");
    while (fahr <= upper) {
        
        celcius =  ( (fahr-32) * 5 ) / 9 ;        
        printf("%-3d %-6d\n", fahr, celcius);        
        fahr = fahr + step;
    
    }

    fahr = lower;
    puts("with right-justification");
    while (fahr <= upper) {
        
        celcius =  ( (fahr-32) * 5 ) / 9 ;        
        printf("%3d %6d\n", fahr, celcius);        
        fahr = fahr + step;
    
    }

    return(0);
}
