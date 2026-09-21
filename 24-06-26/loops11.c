#include<stdio.h>
int main()
{
    int a;
    a=1;
    while (a<=20)
    {
        if ( a%2==0)
        {
            printf("%d ", a);
        }
        a++;
    }
    return 0;
}