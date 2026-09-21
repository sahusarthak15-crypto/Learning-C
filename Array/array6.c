#include<stdio.h>
int main()
{
    int n, b=0, c=0;
    //input
    printf("How mnay numbers? ");
    scanf("%d", &n);
    int arr[n];
    for ( int i= 0; i<n; i++)
    {
        printf("Enter number %d : ", i+1);
        scanf("%d", &arr[i]);
    }
    //even-odd checker.
    for(int i = 0; i<n; i++)
    {
        if (arr[i]%2 == 0)
        {
            b = b+1;
        }
        else{
            c = c+1;
        }
    }
    //output
    printf("Even = %d\n", b);
    printf("Odd = %d", c);
    return 0;

}