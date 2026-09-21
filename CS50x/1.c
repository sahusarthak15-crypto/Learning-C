#include<stdio.h>
int main()
{
    int num; char input;
    printf("How many numbers? ");
    scanf("%d", &num);
    
    printf("Enter Character ");
    scanf(" %c", &input);
    for (int i=0; i<num; i++)
    {
        printf("%c", input);
    }
    return 0;
}