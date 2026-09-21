#include<stdio.h>
int main()
{
    int n, i;
    printf("How many Numbers ");
    scanf("%d", &n);
    int arr[n];
    for ( i=0; i<n;i++)
    { 
        printf("Enter Number %d ", i+1);
        scanf("%d", &arr[i]);
    }
        
    for ( i=0; i<n; i++)
    {
        printf("%d\n", arr[i]);
    }
    return 0;
}