#include<stdio.h>
int main(void){
    char day;
    puts("Enter u for sunday");
    puts("Enter m for monday");
    puts("Enter t for tuesday");
    puts("Enter w for wednesday");
    puts("Enter h for thurday");
    puts("Enter f for friday");
    puts("Enter s for saturday");
    puts("Enter a for all");
    printf("Enter your choice: ");
    scanf("%c",&day);
    switch(day){
        case 'u':
        case 'U':
        printf("Sunday\n Breese and butter");
        break;

        case 'm':
        case 'M':
        printf("Monday\n why everything looks different");
        break;
        
        case 't':
        case 'T':
        printf("Tuesday\n Life is nice");
        break;
        
        case 'w':
        case 'W':
        printf("Wednesday\n I hope I'm not paranoid");
        break;

        case 'h':
        case 'H':
        printf("Thursday\n Let there be break");
        break;

        case 'f':
        case 'F':
        printf("Friday\n Ah! Life sucks");
        break;

        case 's':
        case 'S':
        printf("Saturday\n totally worn");
        break;

        case 'a':
        case 'A':
        puts("Sunday: Breeze and butter");
        puts("Monday: why everything looks different");
        puts("Tuesday: Life is nice");
        puts("Wednesday: I hope I'm not paranoid");
        puts("Thursday: Let there be break");
        puts("Friday: Ah! Life sucks");
        puts("Saturday: I can kill anyone for a hike");            
        break;

        default:
        printf("By default ");
        printf("EVERYDAY gets more fuckin' day");
        break;
    }printf("\n");
}

        printf("Sunday\n Breese and butter");
