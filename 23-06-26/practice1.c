#include<stdio.h>
int main()
{
    int choice;
    printf("====== MENU ======\n");
    printf("1. Start Game\n");
    printf("2. Settings\n");
    printf("3. Exit\n\n");
    printf("Enter your choice :");
    scanf("%d", &choice);
    switch(choice)
    {
        case 1 : printf("START GAME");
        break;
        case 2 : printf("SETTINGS");
        break;
        case 3 : printf("EXIT");
        break;
        default : printf("Please enter a valid input");
    }


    return 0;
}