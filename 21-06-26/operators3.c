#include<stdio.h>
int main(){
    int a=5;
    int b= a++;
    int c= b++;
    int d= c++;
    printf("%d %d %d %d", a, b, c, d);
    return 0;
}