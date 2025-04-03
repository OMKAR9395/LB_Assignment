
#include<stdio.h>
#include<conio.h>
#define FALSE 0
#define TRUE 1

typedef int BOOL;

BOOL ChkCapital(char ch)
{
    if( ch >= 65 && ch <= 90)
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

    bRet = ChkCapital(cValue);
    if(bRet == TRUE)
    {
        printf("\nIt is Capital Character");
    }
    else
    {
        printf("\nIt is not Capital character.");
    }

    getch();
    return 0;
}

