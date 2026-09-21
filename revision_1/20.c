#include<stdio.h>
int main()
{
    int a=1;
    while (a<=60)
    {
        if ( a%3 == 0)
        {
            printf("%d ", a);
        }
        a++;
    }
    return 0;
}