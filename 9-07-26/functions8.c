#include<stdio.h>
int add(int, int);
int sub(int, int);
int mult(int, int);
int div(int, int);

int main()
{
    int num1,num2,op,result;
    printf("Enter 1st number ");
    scanf("%d", &num1);
    printf("SELECT OPERATOR\n");
    printf("1. Addition\n");
    printf("2. Subtarction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    scanf("%d", &op);
    printf("Enter 2nd number ");
    scanf("%d", &num2);
    
    switch (op)
    {
        case 1 : result = add(num1,num2);
                printf("Answer = %d", result);
        break;
        case 2 : result = sub(num1,num2);
        printf("Answer = %d", result);
        break;
        case 3 : result = mult(num1,num2);
        printf("Answer = %d", result);
        break;
        case 4 : if ( num2 == 0)
        {
            printf("Division by zero is not allowed");
        }
        else 
        {
            result = div(num1,num2);
        printf("Answer = %d", result);
        }
        break;
        default : printf("Select valid operator");
        break;
    }
    return 0;


}
int add(int a, int b)
{
    return ( a + b);
}
int sub(int a, int b)
{
    return ( a-b);
}
int mult(int a, int b)
{
    return (a*b);
}
int div( int a, int b)
{
     return ( a/b);
}