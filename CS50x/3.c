#include<stdio.h>
int main() {
    int height;
    
    while (1) {
        printf("Height? ");
        scanf("%d", &height);
        if (height > 0 ){
            break;
        }

    }
    for(int i=0; i<height; i++){
        for(int j=0; j<height; j++)
        {
            if( j>= height - i - 1)
            {
                printf("#");
            }
            else {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}

