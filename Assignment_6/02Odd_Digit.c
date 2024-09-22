//////////////////////////////////////////////////////////////////////
//  Write a program which accept number from user and return the    //
//  count of odd digits.                                            //
//                                                                  //
//  Input : 2395                                                    //
//  Output : 3                                                      //
//  Input : 1018                                                    //
//  Output : 2                                                      //
//  Input : -1018                                                   //
//  Output : 2                                                      //
//  Input : 8462                                                    //
//  Output : 0                                                      //
//////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<conio.h>
int CountOdd(int);
int CountOdd(int iNo)
{
    int Digit=0,Sum=0;
    if(iNo < 0)
    {
        iNo=-iNo;
    }
    while (iNo>0)
    {
        Digit = iNo % 10;
        if(Digit % 2 == 1)
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

    iRet = CountOdd(iValue);

    printf("\n %d",iRet);
    getch();
    return 0;
}