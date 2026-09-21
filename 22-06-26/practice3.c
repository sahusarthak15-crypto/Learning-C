#include<stdio.h>
int main(){
    printf("Find largest number among any three numbers\n");
    int a, b, c;
    printf("Enter first number\n");
    scanf("%d", &a);
    printf("Enter second number\n");
    scanf("%d", &b);
    printf("Enter third number\n");
    scanf("%d", &c);
     if ( a>b && b>c && a>c)
     {
        printf("%d is largest", a);
     }
     else if (a>b && c>b && a>c)
     {
      printf("%d is largest", a); 
     }
     else if (b>a && b>c && a>c){
        printf("%d is largest", b);
     }
     else if ( b>a && b>c && c>a)
     {
        printf("%d is largest", b);
     }
     else if ( a>b && c>b && c>a)
     {
        printf("%d is largest", c);
     }
     else if (b>a && c>b && c>a)
     {
        printf("%d is largest", c);
     }
     else 
     {
        printf("All the three numbers are equal");
     }
     return 0;
}