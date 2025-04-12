#include<stdio.h>
#include<conio.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkVowel(char *str)
{
    int i = 0;
    while(str[i] != '\0')
    {
        if(str[i] == 'A' ||str[i] == 'E' ||str[i] == 'I' ||str[i] == 'O' ||str[i] == 'U' ||str[i] == 'a' ||str[i] == 'e' ||str[i] == 'i' ||str[i] == 'o' ||str[i] == 'u' )
        {
            return TRUE;
        }
        i++;
    }
    return FALSE;
}
int main()
{
    char cArr[20] = "";
    BOOL bRet = FALSE;

    printf("\nEnter the String : ");
    scanf("%[^'\n']s",&cArr);

    bRet = ChkVowel(cArr);

    if(bRet == TRUE)
    {
        printf("\nContains Vowel.");
    }
    else
    {
        printf("\nThere is no Vowel.");
    }

    getch();
    return 0;
}
