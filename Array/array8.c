#include<stdio.h>
int main()
{
    int numCount, temp;
    printf ("How many numbers? ");
    scanf("%d", &numCount);
     int a[numCount];
    for (int i=0; i<numCount; i++)
    {
        printf("Enter number %d : ", i+1);
        scanf("%d", &a[i]);
    }
    for (int i=0; i<numCount; i++)
    {
        printf("%d ", a[i]);
    }
    for (int i=0; i<numCount/2; i++)
    {
       temp = a[i];
       a[i] = a[(numCount - i) - 1];
       a[(numCount - i) - 1] = temp;
    }
    for (int i=0; i<numCount; i++)
    {
        printf("\n%d ", a[i]);
    }
    return 0;
}