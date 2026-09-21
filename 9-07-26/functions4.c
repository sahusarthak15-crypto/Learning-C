#include<stdio.h>
int square(int);
int main()
{
    int a;
    printf("Enter a number ");
    scanf("%d", &a);
    int b = square(a);
    printf("square is %d", b);
    
    return 0;

}
int square ( int x)
{
    return ( x*x);
}