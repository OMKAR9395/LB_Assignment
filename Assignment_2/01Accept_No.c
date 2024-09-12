//////////////////////////////////////////////////////////
//     Accept one Number from user                      //
//     and print that number of *                       //  
//     on screen                                        //  
//                                                      //          
//////////////////////////////////////////////////////////
#include<stdio.h>
#include<conio.h>
void Display(int iNo)
{
    int iCnt = 0;
    for(iCnt = 1;iCnt<=iNo;iCnt++)
    {
        printf("*");
    }
}
int main()
{
    int iValue = 0;
    printf("\n Enter Number:");
    scanf("%d",&iValue);
    Display(iValue);
    getch();
    return 0;
}