#include<stdio.h>
int main()
{
    int a;
    int b;
    int c;
    printf("enter first number ");
    scanf("%d", &a);
    printf("enter second number ");
    scanf("%d", &b);
    printf("before\na = %d\nb = %d\n", a,b);
    c=b;
    b=a;
    a=c;
    printf("after\na = %d\nb = %d", a,b);
    return 0;
}