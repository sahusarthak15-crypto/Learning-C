#include<stdio.h>
void fun(int n)
{
    if ( n==0)
    {
        return;
    }
    else 
    {
       fun (n-1);
       printf("%d\n", n);
       return;
    }
}
int main()
{
    int n;
    printf("Enter The Number ");
    scanf("%d", &n);
    fun(n);
    return 0;
}