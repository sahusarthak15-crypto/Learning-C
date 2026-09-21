#include<stdio.h>
 
int add(int, int);// prototype or declaration of function.
int main()
{
    int m = 20, n = 30, sum;
    sum = add(m, n); // m and n are arguments.
    printf("sum is %d", sum);
}
int add(int a, int b) // fucntion defination.
// a and b are paramenters.
{
    return ( a + b );
}