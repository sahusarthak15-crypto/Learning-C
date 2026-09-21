#include<stdio.h>
#include<stdlib.h>



int main()
{
    char ptxt[] = "";
    int  intptxt[] = {};
    int ciphertxt[] = {};
    int key;


    
    printf("Enter your text: ");
    scanf("%[^\n]", ptxt);
    printf("Enter key: ");
    scanf("%d", &key);



    if( key > 26)
    {
        key -= 26;
    }
    if ( key < 0 && key > -26)
    {
        key = abs(key);
    }
    if ( key < -26)
    {
        key = abs(key);
    }

    for( int i = 0; i < (sizeof(ptxt)/sizeof(ciphertxt)); i++)
    {
        ciphertxt[i] = ptxt[i] + key;
    }



    

}