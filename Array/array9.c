#include<stdio.h>
int main()
{
    int num, rem;
    printf("Enter number ");
    scanf("%d", &num);
    int seen[10]={0};
    if (num == 0)
    {
        printf("The number is zero");
    }
    
    while (num>0)
    {
         rem = num%10;
        if ( seen[rem]==1)
        {
            break;
        }
        seen[rem]=1;
        num = num/10;
    }
    if ( num > 0){
    printf("Yes");
    }
    else{
        printf("No");
    }
    return 0;
}