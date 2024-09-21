//////////////////////////////////////////////////////////////////////////////
//  Write a program which accept number from user and count frequency       //
//  of such a digits which are less than 6.                                 //
//  Input : 2395                                                            //
//  Output : 3                                                              //
//  Input : 1018                                                            //
//  Output : 3                                                              //
//      Input : 94410                                                       //
//      Output : 3                                                          //
//  Input :  96672                                                          //
//  Output : 1                                                              //
//////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<conio.h>
int CountFour(int iNo)
{
    int iDigit=0,iSum=0;
	if(iNo<0)
	{
		iNo=-iNo;
	}
	while(iNo>0)
	{
		iDigit=iNo%10;
		if(iDigit<6)
		{
			iSum++;
		}
		iNo=iNo/10;
	}
	return iSum;
}
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("\n Enter a Number :");
    scanf("%d",&iValue);

    iRet = CountFour(iValue);

    printf("%d",iRet);

    getch();
    return 0;
}