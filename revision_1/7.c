#include<stdio.h>
int main()
{
    int a;
    int b;
    printf("Enter 1st number ");
    scanf("%d", &a);
    printf("Enter 2nd number ");
    scanf("%d", &b);

    if ( a > b)
    {
        printf("%d is greater than %d", a,b);
    }
    else if ( b > a)
    {
        printf("%d is greater than %d", b,a);
    }
    else 
    {
        printf(" %d is equal to %d", a,b);
    }
    return 0;
}