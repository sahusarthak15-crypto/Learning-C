#include<stdio.h>
int main()
{
    int n, i, sum =0;
    printf("How many numbers? ");
    scanf("%d", &n);
    int arr[n];
    for(i=0; i<n; i++)
    {
        printf("Enter number %d ", i+1);
        scanf("%d", &arr[i]);
    }
    for(i=0; i<n; i++)
    {
        sum = arr[i] + sum;
    }
    printf("Sum = %d", sum);
    return 0;
}