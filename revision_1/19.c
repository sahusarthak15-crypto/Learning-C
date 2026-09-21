#include<stdio.h>
int main()
{
    int a;
    int sum =0;
    printf("enter a natural number ");
    scanf("%d", &a);
    
    while ( a >= 1 )
    {
        sum = sum + a;
        a--;
     
    }
    printf("%d", sum);
    return 0;

}