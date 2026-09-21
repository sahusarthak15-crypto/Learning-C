#include<stdio.h>
int main()
{
    //input
    int numCount,  numSearch, result=0;
    printf("How many numbers? ");
    scanf("%d", &numCount);
    int a[numCount];
    for(int i=0; i < numCount; i++)
    {
        printf("Enter Number %d : ", i+1);
        scanf("%d", &a[i]);
    }
    //number search- output
    printf("Enter number to search ");
    scanf("%d", &numSearch);
    for(int i=0; i < numCount; i++)
    {
        if (numSearch == a[i])
        {
            result = 1;
            break;
        }
    }
    if ( result == 1)
    {
        printf("Found");
    }
    else{
        printf("Not found");
    }
    return 0;
 }