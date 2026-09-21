#include<stdio.h>
int main()
{
    int input;
    int a;
    printf("Please enter your number\n");
    scanf("%d", &input);
    for ( a=1; a <= 10; a++)
    {
        printf("%d\n", input*a);
    }
    return 0;
}