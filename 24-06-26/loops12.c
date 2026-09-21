#include<stdio.h>
int main ()
{
    int input;
   
    printf("Enter the number\n");
    scanf("%d", &input);
   
    int a =1;
    while (a<=10)
    {
        printf("%d\n", a*input);
        a++;
    }
    return 0;
}