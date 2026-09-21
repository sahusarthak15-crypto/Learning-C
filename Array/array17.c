#include<stdio.h>
int main()
{
    int row,col,sum = 0;
    printf("Rows = ");
    scanf("%d", &row);
    printf("Columns = ");
    scanf("%d", &col);
    int arr[row][col];
    //input for array elements
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("Enter element at row %d, column %d ", (i+1), (j+1));
            scanf("%d", &arr[i][j]);
        }
    }
    //sum calculation/output.
    for ( int j = 0; j < col; j++)
    {
        for ( int i = 0; i < row; i++)
        {
            sum += arr[i][j];
        }
        printf("column %d = %d\n", (j+1), sum);
        sum = 0;
    }
    return 0;
}