#include<stdio.h>
int main()
{
    printf("Check eligibility for voting\n");
    int age;
    printf("Enter your age\n");
    scanf("%d", &age);

    if ( age >= 18)
    {
        printf("Eligible");
    }
    else
    {
        printf("Not Eligible");
    }
    return 0;
}