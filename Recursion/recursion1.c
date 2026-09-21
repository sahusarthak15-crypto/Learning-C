#include <stdio.h>
int fact(int);

int main()
{
    int a;
    printf("Enter The Number ");
    scanf("%d", &a);
    printf("%d", fact(a));
    return 0;

}

int fact(int x)
{
    if (x==0)
    {
        return 1;
    }
        return x*fact(x-1);
    
}