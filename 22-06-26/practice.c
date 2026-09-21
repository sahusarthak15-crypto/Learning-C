#include<stdio.h>
int main() {
    printf("Check whether number is positive, negative or zero\n");
    int input;
    printf("Please enter the number below\n");
    scanf("%d", &input);
if ( input > 0){
    printf("The number is positive");
}
else if( input == 0 ){
      printf("The number is zero");
}

else {
    printf("The number is negative");
}
return 0;
}