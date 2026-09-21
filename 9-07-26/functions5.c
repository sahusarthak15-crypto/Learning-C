#include<stdio.h>
int maximum (int, int);
int main()
{
    int input1, input2;
    printf("Enter first number ");
    scanf("%d", &input1);
    printf("Enter 2nd number ");
    scanf("%d", &input2);
    int maxNum = maximum (input1, input2);
    printf(" Maximum is %d", maxNum);
    return 0;

}
int maximum ( int a, int b)
{
    if ( a > b)
    {
        return a;
    }
    else 
    return b;
}