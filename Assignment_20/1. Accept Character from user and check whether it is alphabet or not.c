
#include<stdio.h>
#include<conio.h>
#define FALSE 0
#define TRUE 1

typedef int BOOL;

BOOL ChkAlpha(char ch)
{
    if( (ch >= 65 && ch <= 90) || ch >= 97 && ch <= 122)
    {
        return TRUE;
    }
    return FALSE;
}
int main()
{
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("\nEnter the character : ");
    scanf("%c",&cValue);

    bRet = ChkAlpha(cValue);
    if(bRet == TRUE)
    {
        printf("\nIt is Character");
    }
    else
    {
        printf("\nIt is not a character.");
    }

    getch();
    return 0;
}

