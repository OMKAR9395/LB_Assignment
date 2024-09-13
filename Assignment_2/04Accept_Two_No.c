//////////////////////////////////////////////////////////
//    Accept two numbers from user and display          //      
//    First Number in Second                            //
//    Number of times.                                  //
//    Input : 12 5                                      //   
//    Output : 12 12 12 12 12                           //       
//////////////////////////////////////////////////////////
#include<stdio.h>
#include<conio.h>
void Display(int iNo, int iFrequency)
{
    int i=0;

    for(i=1;i<=iFrequency;i++)
    {
        printf("%d\t",iNo);
    }
}
int main()
{
    int iValue = 0;
    int iCount = 0;

    printf("\n Enter Number :");
    scanf("%d",&iValue);
    printf("\n Enter Frequency :");
    scanf("%d",&iCount);

    Display(iValue,iCount);

    getch();
    return 0;
}