#include<stdio.h>
int main()
{
    int n, sum=0;
    printf("How many numbers? ");
    scanf("%d", &n);
    int arr[n];
    //input
    for (int i=0;i<n; i++ )
    {
        printf("Enter Number %d : ", i+1);
        scanf("%d", &arr[i]);
    }
    // sum
    for(int i=0; i<n; i++)
    {
        sum = sum + arr[i];
    }
    //output
    printf("Average is %d", sum/n);
    return 0;


}
