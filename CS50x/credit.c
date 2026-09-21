#include<stdio.h>
int main() {
    long long int cardnumber; 
    printf("Enter card number: ");
    scanf("ll%d", &cardnumber);
    int digits=0;
    long long int cardnumberclone = cardnumber;
    while(cardnumberclone!=0) {
        cardnumberclone = cardnumberclone/10;
        digits += 1;
    }
    int storenumber[digits];
    for(int i=digits-1; i>=0; i--) {
        storenumber[i] = cardnumber%10;
        cardnumber /= 10;
    }
    for(int i=0; i<digits; i++) {
        printf("%d", storenumber[i]);
    }

    return 0;


    
}