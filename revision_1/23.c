#include<stdio.h>
int main()
{
    int a;
    int b;
    int c;
    printf("Enter 1st number ");
    scanf("%d", &a);
    printf("Enter 2nd number ");
    scanf("%d", &c);
    printf("Select an operator\n1. Addition\n2. Subtraction\n3. Multiplication\n4.Division\n5. EXIT\n");
    scanf("%d", &b);
    
    switch (b)
    {
        case 1 : printf("%d + %d = %d", a,c,a+c);
        break;
        case 2 : printf("%d - %d = %d", a,c,a-c);
        break;
        case 3 : printf("%d x %d = %d", a,c,a*c);
        break;
        case 4 : printf("%d / %d = %d", a,c,a/c);
        break;
        case 5 : printf("EXIT");
        break;
        default : printf("INVALID INPUT");
        break;
    }
    return 0;
}