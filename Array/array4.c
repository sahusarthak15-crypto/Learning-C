#include<stdio.h>
int main()
{
    int n;
    printf("How many numbers? ");
    scanf("%d", &n);
    int arr[n];
    for (int i=0;i<n; i++ )
    {
        printf("Enter Number %d : ", i+1);
        scanf("%d", &arr[i]);
    }
    int b = arr[0];
    for ( int i=1; i<n; i++)
    {
        if ( b > arr[i])
        {
            b = arr[i];
        }
    }
    printf("Smallest number is %d", b);
    return 0;

}