#include<stdio.h>
int main() {
    // ARRAY & VARIABLES
    int coins[] = {25,10,5,1};
    int change, sum=0, count=0;
    // INPUT
    while(1) {
        printf("Change? ");
        scanf("%d", &change);
        if(change > 0) {
            break;
        }
        else if (change == 0) {
            printf("Change owed = 0\n");
            printf("Coins = 0");
            return 0;
        }
    }
    //MINIMUM COINS ALGORITHM
    for(int i=0; i<4; i++) {
        while(1) {
            sum += coins[i];
            count += 1;
            if (sum == change) {
                printf("Change owed: %d\n", change);
                printf("%d", count);
                return 0;
            }
            else if (sum > change) {
                sum -= coins[i];
                count -= 1;
                break;
            }
        }
    }
   
    return 0;

}