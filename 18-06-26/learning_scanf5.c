#include<stdio.h>
int a,b;
int sum(){
    int output= a+b;
    return a+b;
}
int  main(){
    printf("Enter numbers for sum");
    scanf("%d %d", &a, &b);
     int result = sum();
    printf("%d", result);

}