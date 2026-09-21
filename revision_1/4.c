#include<stdio.h>
int main()
{
    int a;
    int b;
    char c;
    printf("Enter your 1st number ");
    scanf("%d", &a);
    printf("enter 2nd number ");
    scanf("%d",&b);
    printf("Select your operator ");
    scanf(" %c",&c);
    switch(c)
    {
        case '+' : printf("%d", a+b);
        break;
        case '-': printf("%d", a-b);
        break;
        case '*': printf("%d", a*b);
        break;
        case '/' : printf("%d", a/b);
        break;
        default : printf("invalid operator");
    }
    return 0;
    
}