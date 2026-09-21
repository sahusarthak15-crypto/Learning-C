#include<stdio.h>
int main()
{
    int a;
    int sum =0;
    printf("enter the natural number ");
    scanf("%d", &a);
    for ( a; a>= 1; a--)
    {
        sum = sum + a;
    }
    printf("%d", sum);
    return 0;
}