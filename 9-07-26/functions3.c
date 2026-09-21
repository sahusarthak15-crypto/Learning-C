#include<stdio.h>
int add(int,int);
int main()
{
    int a, b, sum ;
    printf("Enter 1st number ");
    scanf("%d", &a);
    printf("Enter 2nd number ");
    scanf("%d", &b);
    sum = add(a,b);
    printf("sum = %d", sum);
    return 0;

}
int add (int x, int y)
{
    return ( x + y);
}