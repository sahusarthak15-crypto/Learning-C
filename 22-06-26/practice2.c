#include<stdio.h>
int main(){
    printf("Compare any two numbers\n");
    int a, b;
    printf("Please enter first number\n");
    scanf("%d", &a);
    printf("Please enter second number\n");
    scanf("%d", &b);

    if (a > b) 
    {
        printf("%d is greater", a);
    }
    else if ( a==b)
        {
        printf("Both are equal");
        }
    else
    {
        printf("%d is greater", b);
    }
    return 0;


}