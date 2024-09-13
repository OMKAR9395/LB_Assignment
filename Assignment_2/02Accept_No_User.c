//////////////////////////////////////////////////////////
//     Accept one Number from user                      //
//     and print that number of *                       //  
//     on screen                                        //  
//                                                      //          
//////////////////////////////////////////////////////////
#include<stdio.h>
#include<conio.h>
void Display( int iNo)
{
    while (iNo > 0)
    {
        printf("\n *");
        iNo--;
    }
}
int main()
{
    int iValue = 0;
    printf("\n Enter Number :");
    scanf("%d",&iValue);
    Display(iValue);
    getch();
    return 0;
}