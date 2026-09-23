#include<stdio.h>
#include<ctype.h>

int main()
{
    int index[26];
    char lowalpha[] = "abcdefghijklmnopqrstuvwxyz";
    char upalpha[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ"; 

    char key[27];
    
    char ptxt[1000]; // plaintext (input)
    char ctxt[1000]; // ciphered text (output)

    for (; 1 ; )
    {
        printf("Key? ");
        scanf("%26s", key); // key input 
        getchar();
        for (int j = 0; key != '\0'; j++)
        {
            if (isalpha(key[j]) == 0)
            {
                return;
            }
        }
        for 
    }

    
    
    
    printf("Plain text: "); // lain text input 
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
                    if ( ptxt[i] == upalpha[j])
                   {
                    ctxt[i] = key[j];
                   }
                }
        
            }

            else if (islower(ptxt[i]))
          {
            for(int j = 0; lowalpha[j] != '\0'; j++)
            {
                if ( ptxt[i] == lowalpha[j])
                {
                    ctxt[i] = key[j];
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