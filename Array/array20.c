#include<stdio.h>
int main()
{
    int arow, acolumn;
    int brow, bcolumn;
    printf("Enter number of rows and columns of matrix A ");
    scanf("%d %d", &arow, &acolumn);
    printf("Enter number of rows and columns of matrix B ");
    scanf("%d %d", &brow, &bcolumn);
    if ( acolumn != brow)
    {
        printf("These matrices cannot be multiplied");
        return 0;
    }
    int Amatrix[arow][acolumn];
    int Bmatrix[brow][bcolumn];

    for(int i=0; i<arow; i++)
    {
        for(int j=0; j<acolumn; j++)
        {
            printf("Enter matrix A element at row %d, column %d ", (i+1), (j+1));
            scanf("%d", &Amatrix[i][j]);
        }
    }

    for(int i=0; i<brow; i++)
    {
        for(int j=0; j<bcolumn; j++)
        {
            printf("Enter matrix B element at row %d, column %d ", (i+1), (j+1));
            scanf("%d", &Bmatrix[i][j]);
        }
    }
    int sum=0;
    int product[arow][bcolumn];
    for (int i=0; i<arow; i++)
    {
        for (int j=0; j<bcolumn; j++)
        {
            for (int k=0; k<brow; k++)
            {
                sum += Amatrix[i][k]*Bmatrix[k][j];
            }
            product[i][j] = sum;
            sum = 0;
        }
    }

    for (int i=0; i<arow; i++)
    {
        for (int j=0; j<bcolumn; j++)
        {
            printf("%d ", product[i][j]);
        }
        printf("\n");
    }
    return 0;

}