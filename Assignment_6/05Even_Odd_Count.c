//////////////////////////////////////////////////////////////////////////////
//  Write a program which accept number from user and return                //
//  difference between summation of even digits and summation of odd digits.//
//  Input : 2395                                                            //
//  Output : -15 (2 - 17)                                                   //
//  Input : 1018                                                            //
//  Output : 6 (8 - 2)                                                      //
//  Input : 8440                                                            //
//  Output : 16 (16 - 0)                                                    //
//  Input : 5733                                                            //
//  Output : -18 (0 - 18)                                                   //
//////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<conio.h>
int DifferenceEvenOdd(int);
int DifferenceEvenOdd(int iNo)
{
    int iDigit = 0,EvenSum = 0, OddSum = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }
    while(iNo > 0)
    {
        iDigit = iNo % 10;
        
        if(iDigit % 2 == 0)
        {
            EvenSum += iDigit;
        }
        else
        {
            OddSum += iDigit;
        }
        
        iNo = iNo / 10; 
    }

    return EvenSum - OddSum; 
}
int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter a number: ");
    scanf("%d", &iValue);

    iRet = DifferenceEvenOdd(iValue);

    printf("Difference between sum of even and odd digits is: %d\n", iRet);

    return 0;
}
