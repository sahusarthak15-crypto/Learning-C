#include<stdio.h>
int main() {
    // input.
    int height; 
    printf("Height? ");
    scanf("%d", &height);
    // pattern print logic and output.
    for(int i=0; i<height; i++) {
        for(int j=0; j<height; j++)
        {
            if(j< height -i -1){
            printf(" ");
            }
        }
        for (int j=0; j<height; j++)
        {
            if(j>= height - i - 1){
            printf("#");
            }
        }
        printf("  ");
        for(int j=0; j<height; j++)
        {
            if( j<=i)
            {
                printf("#");
            }
        }
       
        printf("\n");

    }
    return 0;
}