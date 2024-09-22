//////////////////////////////////////////////////////////////////////////
//  Write a program which accept number from user and return            //
//  multiplication of all digits.                                       //
//  Input : 2395                                                        //
//  Output : 270                                                        //
//  Input : 1018                                                        //
//  Output : 8                                                          //
//  Input : 9440                                                        //
//  Output : 144                                                        //
//  Input : 922432                                                      //
//  Output : 864                                                        //  
//////////////////////////////////////////////////////////////////////////
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
    Sum=1;
    while (iNo>0)
    {
        Digit = iNo % 10;
        
        if(Digit >0)
        {
            Sum = Digit * Sum;
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