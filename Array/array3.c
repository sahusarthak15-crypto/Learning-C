#include<stdio.h>
int main()
{
    int n, i;
    printf("How many numbers ");
    scanf("%d", &n);
    int arr[n];
    for (i=0; i<n; i++)
    {
        printf("Enter Number %d : ", i+1);
        scanf("%d", &arr[i]);
    }
    int b = arr[0];
    for (i=1; i<n; i++)
    {
        if (b < arr[i])
        {
            b = arr[i];
        }
    }
    printf("Largest is %d", b);
    return 0;
}