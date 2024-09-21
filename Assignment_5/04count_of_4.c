//////////////////////////////////////////////////////////////////////////////
//  Write a program which accept number from user                           //
//  and count frequency of 2 in it.                                         //
//  Input : 2395                                                            //
//  Output : 1                                                              //
//  Input : 1018                                                            //
//  Output : 0                                                              //
//      Input : 94410                                                       //
//      Output : 2                                                          //
//  Input : 922432                                                          //
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
		if(iDigit==4)
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