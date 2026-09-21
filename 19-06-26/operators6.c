#include<stdio.h>
#define pi 3.14
int main(){
    float r;
    printf("Calculate area of a circle\n");
    printf("Enter radius\n");
    scanf("%f",&r);
    printf("Area = %.2f", pi*r*r);
    return 0;
}