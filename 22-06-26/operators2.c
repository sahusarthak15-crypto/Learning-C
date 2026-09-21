#include<stdio.h>
int main(){
    int i = 4;
    int var = sizeof(i++);
    printf("%d %d", i, var);
    return 0;
}