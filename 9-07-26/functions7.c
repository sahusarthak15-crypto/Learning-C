#include<stdio.h>
int abValue(int);
int main()
{
    int input;
    printf("Enter number ");
    scanf("%d", &input);
    int result = abValue(input);
    printf("%d", result);
    return 0;
}
int abValue(int a)
{
    if ( a >= 0)
    {
        return a;
    }
    else 
    return ( -a);
}