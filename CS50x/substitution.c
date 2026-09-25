#include<stdio.h>
#include<ctype.h>

int main()
{
    
    char lowalpha[] = "abcdefghijklmnopqrstuvwxyz";
    char upalpha[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ"; 

    
    
    char key[27];       
    
    char ptxt[1000]; // plaintext (input)
    char ctxt[1000]; // ciphered text (output)
    int j;

    for (; 1 ; )
     
    {
        int value[26] = {0};
        printf("Key? ");
        scanf("%26s", key); // key input 
        getchar();
        for ( j = 0; key[j] != '\0'; j++)
        {
            if (isalpha(key[j]) == 0)
            {
                break;
            }
            else if (isupper(key[j]))
            {
                int index = key[j] - 'A';
                if (value[index] == 1 )
                {
                    break;
                }
                value[index] = 1;
            }
            else if (islower(key[j]))
            {
                int index = key[j] - 'a';
                if (value[index] == 1 )
                {
                    break;
                }
                value[index] = 1;
            }
            
            
        }

        
        if (j == 26)
        {
            break;
        }
        
    }

    
    
    
    printf("Plain text: "); // plain text input 
    scanf("%[^\n]", ptxt);

    // algorithm.

        int i;
        for (i = 0; ptxt[i] != '\0'; i++) 
        {
            if(isalpha(ptxt[i]))
            {
            
                if (isupper(ptxt[i]))
            
                {
                for(int j = 0; upalpha[j] != '\0'; j++)
                    {
                        if ( ptxt[i] == upalpha[j] )
                    {
                        ctxt[i] = toupper(key[j]);
                    }
                   
                    }
            
                }

                else if (islower(ptxt[i]))
            {
                for(int j = 0; lowalpha[j] != '\0'; j++)
                {
                    if ( ptxt[i] == lowalpha[j] )
                    {
                        ctxt[i] = tolower(key[j]);
                    }
                    
                }
            }
            }
            else 
            {
                ctxt[i] = ptxt[i];
            }
        }
        ctxt[i] = '\0';

        printf("%s", ctxt);// output
        
        return 0;

    }