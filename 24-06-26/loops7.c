#include<stdio.h>
int main()
{
    int sum=0;
    // int sum = 0, why??
    int a;

    printf("Enter number ");
    scanf("%d", &a);
    for ( a; a>=1;a-- )
    {
        sum = sum + a;
        
    }
    printf("%d", sum);
    return 0;
}