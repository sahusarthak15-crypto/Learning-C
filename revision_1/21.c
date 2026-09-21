#include<stdio.h>
int main()
{
    int a;
    int sum = 0;
    printf("Enter a natural number ");
    scanf("%d", &a);
    do 
    {
        sum = sum + a;
        a--;
    }
    while ( a >= 1);
    printf("%d", sum);
    return 0;
    
}