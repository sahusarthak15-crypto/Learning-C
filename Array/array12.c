#include<stdio.h>
int main()
{
    int i,j;
    printf("Rows = ");
    scanf("%d", &i);
    printf("Columns = ");
    scanf("%d", &j);
    int arr[i][j];
    for(int b = 0; b<i; b++)
    {
        for (int c=0; c<j; c++)
        {
            printf("Enter element at row %d, column %d ", (b+1), (c+1));
            scanf("%d", &arr[b][c]);
        }
    }
    for (int b=0; b<i; b++)
    {
        for (int c=0; c<j; c++)
        {
            printf("%d ", arr[b][c]);
        }
        printf("\n");
    }
}