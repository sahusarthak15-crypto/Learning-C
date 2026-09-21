#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>

int main()
{
    int score1 = 0;
    int score2 = 0;
    char letters[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

    int values[] = {1,3,3,2,1,4,2,4,1,8,5,1,3,1,1,3,10,1,1,1,1,4,4,8,4,10};

    char *player1 = malloc(21);
     if (player1 == NULL)
    {
        
        return 1;
    }

    char *player2 = malloc(21);
     if (player2 == NULL)
    {
        free(player1);
        return 1;
    }


    printf("Player 1: ");
    scanf("%20s", player1);
    
    for (int i =0; player1[i] != '\0'; i++)
    {
        player1[i] = toupper(player1[i]);
    }
    
   
    printf("Player 2: ");
    scanf("%20s", player2);
       
    for (int i =0; player2[i] != '\0'; i++)
    {
        player2[i] = toupper(player2[i]);
    }
 

    int length1 = strlen(player1);
    int length2 = strlen(player2);

    
    for (int i = 0; i < length1; i++)
    {
        for (int j = 0; j < 26; j++)
        {
            if ( player1[i] == letters[j])
            {
                score1 += values[j];
            }
        }
    }
    

    
    for (int i = 0; i < length2; i++)
    {
        for (int j = 0; j < 26; j++)
        {
            if ( player2[i] == letters[j])
            {
                score2 += values[j];
            }
        }
    }
if (score1 > score2)
{
    printf("Player 1 is winner!");
}
else if( score1 == score2)
{
    printf("Both are winners!");
}
else
{
    
    printf("Player 2 is winner!");
}

free(player1);
free(player2);

return 0;


}

