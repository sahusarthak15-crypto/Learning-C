#include<stdio.h>
int main()
{
    int day;
    printf("Name of the day of week\n");
    printf("Please enter the day of week, whose name you want to know\n");
    scanf("%d", &day);
    switch (day)
    {
        case 1 : printf("Monday");
        break;
        case 2 : printf("Tuesday");
        break;
        case 3 : printf("Wednesday");
        break;
        case 4 : printf("Thursday");
        break;
        case 5 : printf("Friday");
        break;
        case 6 : printf("saturday");
        break;
        case 7 : printf("Sunday");
        break;
        default : printf("Invalid Input");
    }
    return 0;

}