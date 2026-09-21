#include<stdio.h>

int main(){
    char name;
    int age;
    printf("Enter your name\n");
    scanf("%c",&name);
    printf("Enter your age\n");
    scanf("%d",&age);
    printf("Name %c\n", name);
    printf("Age %d", age);
    return 0;
}
// here when i gave input sarthak sahu, since no string used in char name it only inputs s and rest of the characters of sarthak sahu are in buffer so when input for age is executed it automatically takes the character after s as input and since age is int variable the output printed for age is garbage vale.