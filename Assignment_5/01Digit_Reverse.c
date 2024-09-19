//////////////////////////////////////////////////////////////////////////////////////////
//   Write a program which accept number from user and display its digits in reverse    //                                 
//   order.                                                                             //
//   Input : 2395                                                                       //
//   Output :   5                                                                       //
//              9                                                                       //
//              3                                                                       //
//              2                                                                       //
//   Input : 1018                                                                       //
//   Output :   8                                                                       //
//              1                                                                       //
//              0                                                                       //
//              1                                                                       //
//    Input : -1018                                                                     //
//    Output :  8                                                                       //
//              1                                                                       //
//              0                                                                       //  
//              1                                                                       //
//   Input : 9000                                                                       //
//   Output :   0                                                                       //
//              0                                                                       //
//              0                                                                       //
//              9                                                                       //
//////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<conio.h>
void DisplayDigit(int);
void DisplayDigit(int iNo)
{
	int iDigit=0;
	if(iNo<0)
	{
		iNo=-iNo;
	}
	while(iNo>0)
	{
		iDigit=iNo%10;
		printf("%d\n",iDigit);
		iNo=iNo/10;
	}
}
int main()
{
    int iValue=0;

	    printf("\nEnter a Number :");
	    scanf("%d",&iValue);

	    DisplayDigit(iValue);

    getch();
	return 0;
}