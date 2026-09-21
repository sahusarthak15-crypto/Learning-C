#include<stdio.h>
int main(){
    int a=3;
    int b= ++a;
    int c= b++;
    int d= ++a;
    printf("%d %d %d %d", a, b, c ,d);
    return 0;
}