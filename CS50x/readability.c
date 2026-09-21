#include<stdio.h>
#include<ctype.h>

int main()
{
    // variable define and declaration.
    float index;
    int tltr = 0;
    int twrd = 0;
    int tstc = 0;
    float L;
    float S;
    char txt[200];
    // intput.
    printf("TEXT: ");
    scanf("%[^\n]" ,txt);
    // algorithm for calculating total letters and sentecnes.
    for (int i = 0; txt[i] != '\0'; i++)
    {
        if (isalpha(txt[i])) 
        {
            tltr ++;
        }
        if (isblank(txt[i]))
        {
            twrd++;
        }
        if (txt[i] == '.' || txt[i] == '?' || txt[i] == '!' ) 
        {
            tstc ++;
        }
       
    }
    twrd++;
    
    // L and S calculation.
    L = ((float)tltr/twrd)*100;
    S = ((float)tstc/twrd)*100;
    // Grade calculator.
    index = 0.0588 * L - 0.296 * S - 15.8;
    // final output.
   
   if (index < 1)
   {
    printf("Before Grade 1\n");
   }
   else if (index >= 16)
   {
    printf("Grade 16+\n");
   }
   else 
   {
    printf("Grade %.0f\n", index);
   }
   printf("%d %d %d", tstc, twrd, tltr);
    
    return 0;
}