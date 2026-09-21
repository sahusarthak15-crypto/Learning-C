#include<stdio.h>
int power(int e, int b)
{
    if ( e==0)
    {
        return 1;
    }
    return b*power(e-1, b);
}
int main()
{
    int e, b;
    printf("Power Of A Number Calculator\n");
    printf("Enter Base Number ");
    scanf("%d", &b);
    printf("Enter Exponent Number ");
    scanf("%d", &e);
    printf("Result = %d", power(e,b));
    return 0;
}