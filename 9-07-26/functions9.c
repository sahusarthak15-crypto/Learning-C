#include<stdio.h>
int largest(int,int,int);
int main()
{
    int a,b,c;
    printf("Enter 1st Number ");
    scanf("%d", &a);
    printf("Enter 2nd Number ");
    scanf("%d", &b);
    printf("Enter 3rd Number ");
    scanf("%d", &c);
    int result = largest ( a,b,c);
    printf("%d is largest", result);
    return 0;
}
int largest ( int x, int y, int z)
{
    if ( x >= y && x >= z )
    {
        return x;
    }
    else if ( y >= x && y >= z)
    {
        return y;
    }
    else if ( z >= x && z >= y)
    {
        return z;
    }
    
}