#include<stdio.h>
int EvenOdd (int);
int main()
{
    int input;
    printf("Enter Number ");
    scanf("%d", &input);
    int result = EvenOdd(input);
    if ( result == 1)
    {
        printf("The Number is EVEN");
    }
    else 
    printf("The Number is ODD");
    return 0;
}
int EvenOdd( int a)
{
    if ( a%2 == 0)
    {
        return 1;
    }
    else 
    return 0;
}