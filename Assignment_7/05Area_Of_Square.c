//////////////////////////////////////////////////////////////////////////////////////
//  Write a program which accept area in square feet and convert it into square     //
//  meter. (1 square feet = 0.0929 Square meter)                                    //
//  Input : 5                                                                       //
//  Output : 0.464515                                                               //
//  Input : 7                                                                       //
//  Output : 0.650321                                                               //
//                                                                                  //
//////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<conio.h>
double Squaremeter(int iValue);
double SquareMeter(int iValue)
{
    double Meter=0.0;
	if(iValue<0)
	{
		iValue=-iValue;
	}
	
	Meter=(iValue*0.0929);
	return Meter;
}
    int main()
{
    int iValue = 0;
    double dRet = 0.0;

    printf("\n Enter Area in Square Feet :");
    scanf("%d",&iValue);

    dRet = SquareMeter(iValue);

    printf("\n Square feet %d is = %ld Squarefeet",iValue,dRet);

    getch();
    return 0;
}