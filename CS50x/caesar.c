#include<stdio.h>
#include<ctype.h>

int main()
{
    // variable and array declaration and definaion.
    int key;
    key %= 26;
    int index;
    char ptxt[1000];
    char lowalpha[] = "abcdefghijklmnopqrstuvwxyz";
    char upalpha[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";


// Input.

    printf("Enter text: ");
    scanf("%[^\n]", ptxt);
    printf("Key? ");
    scanf("%d", &key);
    printf("%s\n", ptxt);

// algorithm.


     for (int i = 0; ptxt[i] != '\0'; i++)
    {
        if (isalpha(ptxt[i]))
        {
            if (isupper(ptxt[i]))
            {
                
                for(int j = 0; j <26; j++)
                {
                    if (ptxt[i] == upalpha[j])
                    {
                    index = ((j) + key)%26;
                    printf("%c", upalpha[index]);
                    }
                }

            }

            else if (islower(ptxt[i]))
            {
                for(int j = 0; j <26; j++)
                {
                if (ptxt[i] == lowalpha[j])
                    {
                    index = ((j) + key)%26;
                    printf("%c", lowalpha[index]);
                    }
                }

            }
        }
        else 
        {
            printf("%c", ptxt[i]);
        }
    }
    return 0;

}