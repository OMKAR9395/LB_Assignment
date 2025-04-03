
#include<stdio.h>
#include<conio.h>
#define FALSE 0
#define TRUE 1

typedef int BOOL;

BOOL ChkDigit(char ch)
{
    if( ch >= 48 && ch <= 57)
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

    bRet = ChkDigit(cValue);
    if(bRet == TRUE)
    {
        printf("\nIt is Digit.");
    }
    else
    {
        printf("\nIt is not a Digit.");
    }

    getch();
    return 0;
}

