#include<stdio.h>
int main()
{
    int row, col, numsearch;
    printf("Row = ");
    scanf("%d", &row);
    printf("Column = ");
    scanf("%d", &col);
    int arr[row][col];
    //input for array elements.
    for ( int i=0; i < row; i++)
    {
        for (int j=0; j < col; j++)
        {
            printf("Enter element at row %d, column %d ", (i+1), (j+1));
            scanf("%d", &arr[i][j]);
        }
    }
    //number search
    int temp = 0;
    printf("Enter Number to search ");
    scanf("%d", &numsearch);
    for ( int i=0; i < row; i++)
    {
        for ( int j=0; j < col; j++)
        {
            if (arr[i][j] == numsearch)
            {
                temp = 1;
            } 
        }
    }
    if(temp == 1)
    {
        printf("Found");
    }
    else
    {
        printf("Not Found");
    }
    return 0;
}