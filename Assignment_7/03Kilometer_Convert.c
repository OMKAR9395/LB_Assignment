//////////////////////////////////////////////////////////////////////////////////////
//  Write a program which accept distance in kilometre and convert it into meter.   //
//  1 kilometre = 1000 Meter                                                        //
//  Input : 5                                                                       //
//  Output : 5000                                                                   //
//  Input : 12                                                                      //
//  Output : 12000                                                                  //
//                                                                                  //
//////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<conio.h>
int KMtoMeter(int );
int KMtoMeter(int iNo)
{
// Logic
}
int main()
{
    int iValue = 0, iRet = 0;

        printf("\n Enter a  Distance :");
        scanf("%d",&iValue);

    iRet = KMtoMeter(iValue);
    
        printf("\n");

    getch();
    return 0;
}