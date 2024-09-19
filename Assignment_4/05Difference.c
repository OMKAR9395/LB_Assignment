//////////////////////////////////////////////////////////////////////////////////
//                                                                              //
//         Write a program which accept number from user and return             //
//         difference between summation of all its factors and non factors.     //
//                                                                              //
//      Input : 12                                                              //
//      Output : -34 (16 - 50)                                                  //
//      Input : 10                                                              //
//      Output : -29 (8 - 37)                                                   //
//                                                                              //
//////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<conio.h>
int FactDiff(int);
int FactDiff(int iNo)
{
    int i=0, SumFact=0, SumNonFact=0;
	if(iNo<=0)
	{
		iNo=-iNo;
	}
	for(i=1;i<iNo;i++)
	{
		if(iNo%i==0)
		{
			SumFact=SumFact+i;
		}
		else
		{
			SumNonFact=SumNonFact+i;
		}
	}
	return SumFact-SumNonFact;
}
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("\n Enter a Number :");
    scanf("%d",&iValue);

    iRet = FactDiff(iValue);

    printf("%d",iRet);

    getch();
    return 0;
}
