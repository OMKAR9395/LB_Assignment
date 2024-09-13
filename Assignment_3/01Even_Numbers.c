///////////////////////////////////////////////////
//                                               //
// Write a program which accept one number       //
// from user and print that number of            //
// even numbers on screen.                       //
//                                               //
///////////////////////////////////////////////////
//                                               //
//   Input : 7                                   //
//   Output: 2 4 6 8 10 12 14                    //
//                                               //
///////////////////////////////////////////////////
#include<stdio.h>
#include<conio.h>
void PrintEven(int);
void PrintEven(int iNo)
{
    int i=0;
 if(iNo <= 0)
{
    iNo = -iNo;
}
    while(iNo > 0)
{
    i = i+2;
    printf("%d\t",i);
    iNo--;

}

}
int main()
{
    int iValue = 0;

    printf("\n Enter Number :");
    scanf("%d",&iValue);

    PrintEven(iValue);

    getch();
    return 0;
}
