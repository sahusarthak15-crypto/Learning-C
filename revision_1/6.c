#include<stdio.h>
int main()
{
    int a;
    printf("Enter the number ");
    scanf("%d", &a);
    if ( a > 0)
    {
        printf("The number is POSITIVE");
    }
    else if ( a < 0)
    {
        printf("The number is NEGATIVE");
    }
    else 
    {
        printf("The number is ZERO");
    }
    return 0;
}