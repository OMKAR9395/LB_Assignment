
#include<stdio.h>
#include<conio.h>
#define FALSE 0
#define TRUE 1

typedef int BOOL;

BOOL ChkSmall(char ch)
{
    if( ch >= 97 && ch <= 122)
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

    bRet = ChkSmall(cValue);
    if(bRet == TRUE)
    {
        printf("\nIt is Small Case Character.");
    }
    else
    {
        printf("\nIt is not a Small Case Character.");
    }

    getch();
    return 0;
}

