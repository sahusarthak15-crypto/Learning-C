#include<stdio.h>
int main ()
{
    #define pi 3.14
    float radius;
    printf("Area Of Circle\n");
    printf("Enter radius in cm ");
    scanf("%f", &radius);
    printf("Area = %.4f", pi*radius*radius);
    return 0;
}