#include<stdio.h>
int main()
{
    int a;
    int b =1;

    printf("Enter the number ");
    scanf("%d", &a);
    do{
        printf("%d\n", a*b);
        b++;
    }
    while (b<=10);
    return 0;
}