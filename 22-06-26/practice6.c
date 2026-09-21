#include<stdio.h>
int main()
{
    int a, b;
    char op;
    printf("Enter first number\n");
    scanf("%d", &a);
    printf("Enter operator\n");
    scanf(" %c",&op);
    // here the space before  %c is very important!!
    printf("Enter second number\n");
    scanf("%d",&b);
    switch(op)
    {
        case '+' : printf("%d", a+b);
               break;
        case '-': printf("%d", a-b);
            break;
        case '*' : printf("%d", a*b);
            break;
        case '/' : printf("%d", a/b);
        break;
        default : printf("Invalid Operator");       

    }
    return 0;

}