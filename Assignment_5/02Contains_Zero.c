//////////////////////////////////////////////////////////////////////////////
//  Write a program which accept number from user and                       //
//  check whether it contains 0 in it or not.                               //
//  Input : 2395                                                            //
//  Output : There is no Zero                                               //
//  Input : 1018                                                            //
//  Output : It Contains Zero                                               //
//  Input : 9000                                                            //
//  Output : It Contains Zero                                               //
//  Input : 10687                                                           //
//  Output : It Contains Zero                                               //
//////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<conio.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;
BOOL ChkZero(int iNo);
BOOL ChkZero(int iNo)
{
	int iDigit=0;
	if(iNo<0)
	{
		iNo=-iNo;
	}
	while(iNo>0)
	{
		iDigit=iNo%10;
		if(iDigit==0)
		{
			return TRUE;
		}
		iNo=iNo/10;
	}
	return FALSE;
}
int main()
{
    int iValue = 0;
    BOOL bRet = FALSE;
        printf("\n Enter a Number :");
        scanf("%d",&iValue);
    bRet = ChkZero(iValue);
    if(bRet == 1)
    {
        printf("\n It Contains Zero");
    }
    else
    {
        printf("\n There  Is No Zero");
    }
    getch();
    return 0;
}