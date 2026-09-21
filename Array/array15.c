#include<stdio.h>
int main()
{
    //input for array size.
    int row, col;
    printf("Rows = ");
    scanf("%d", &row);
    printf("columns = ");
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
    //largest element finder.
    int lnum = arr[0][0];
    for (int i=0; i < row; i++)
    {
        for (int j=0; j < col; j++)
        {
            if ( lnum < arr[i][j])
            {
                lnum = arr[i][j];
            }
        
        }
    }
    printf("largest number is %d", lnum);
    return 0;
}