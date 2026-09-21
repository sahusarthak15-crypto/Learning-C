#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
int main()
{
    char *s;
    printf("Enter text:");
    scanf("%s", s);
    char *t = malloc(strlen(s) + 1);
    for (int i = 0; i <= strlen(s); i++)
   
    {
        t[i] = s[i];
    }
    t[0] = toupper(t[0]);

    printf("%s\n", s);
    printf("%s\n", t);

}