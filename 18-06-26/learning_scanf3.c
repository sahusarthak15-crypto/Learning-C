#include<stdio.h>
int main(){
    int a,b;
    printf("AGE CALCULATOR\n");
    printf("Enter year of birth");
    scanf("%d",&a);
    printf("Enter current year");
    scanf("%d",&b);
    printf("Your age is %d", b-a);
    return 0;
}