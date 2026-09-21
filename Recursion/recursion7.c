#include<stdio.h>
int count(int n)
{
 if (n==0)
 {
    return 0;
 }
 return 1+ count(n/10);
}
int main()
{
    int n;
    printf("Enter Number ");
    scanf("%d", &n);
    printf("Number of digits = %d", count(n));
    return 0;

}