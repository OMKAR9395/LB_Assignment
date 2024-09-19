//////////////////////////////////////////////////////////////////////////////////////
//                                                                                  //
//   Write a program which accept number from user and return                       //
//   summation of all its non factors.                                              //
//   Input : 12                                                                     //
//   Output : 50                                                                    //
//   Input : 10                                                                     //
//   Output : 37                                                                    //
//   #include<stdio.h>                                                              //
//                                                                                  //
//////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<conio.h>
int SumNonFact(int);
int SumNonFact(int iNo)
{
    int i=0,Sum=0;
	if(iNo<=0)  // Negative Case Handle
	{
		iNo=-iNo;
	}
	for(i=1;i<iNo;i++)
	{
		
			Sum=Sum+i;
		
	}
	return Sum;
}
int main()
{
int iValue = 0;
int iRet = 0;

    printf("\n Enter a Number :");
    scanf("%d",&iValue);

    iRet = SumNonFact(iValue);

    printf("\n\t%d",iRet);

    getch();
    return 0;
}