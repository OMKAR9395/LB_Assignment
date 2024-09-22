//////////////////////////////////////////////////////////////////////////////
//  Write a program which accept number from user and return the count of   //
//  digits in between 3 and 7.                                              //
//  Input : 2395                                                            //
//  Output : 1                                                              //
//  Input : 1018                                                            //
//  Output : 0                                                              //
//  Input : 4521                                                            //
//  Output : 2                                                              //
//  Input : 9922                                                            //
//  Output : 0                                                              //
//////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<conio.h>
int CountRange(int);
int CountRange(int iNo)
{
    int Digit=0,Sum=0;
    if(iNo < 0)
    {
        iNo=-iNo;
    }
    while (iNo>0)
    {
        Digit = iNo % 10;
        if(Digit>3 && Digit<7)
        {
            Sum++;
        }
        iNo = iNo / 10;
    }
    return Sum;
    
}
int main()
{
    int iValue =0,iRet =0;

    printf("\n Enter a Number :");
    scanf("%d",&iValue);

    iRet = CountRange(iValue);

    printf("\n %d",iRet);
    getch();
    return 0;
}