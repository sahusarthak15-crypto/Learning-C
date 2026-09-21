#include<stdio.h>
int main() {
    int height;
    printf("Height? ");
    scanf("%d", &height);
    for(int i = 0; i < height; i++) {
        for(int j = 0; j < height-1-i; j++) {
            
                printf(" ");
            
        }
       
        
        for(int j =0; j < 2*i + 1; j++) {
            
                printf("*");
         
         
        } 
        printf("\n");
    }
    return 0;
}