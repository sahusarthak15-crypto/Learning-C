#include<stdio.h>
int main(){
    printf("Even/Odd checker\n");
    int input;
    printf("Please enter the number\n");
    scanf("%d", &input);

    if ( input%2 == 0){
        printf("The number is even");
    }
    else{
        printf("The number is odd");
    }
    return 0;
}
    