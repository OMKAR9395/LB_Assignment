//////////////////////////////////////////////////////////
//     Accept one Number from user if Number is Less    //
//     Than 10 Print "Hello" OtherWise                  //  
//     Print Demo                                       //  
//                                                      //          
//////////////////////////////////////////////////////////
#include<stdio.h>
#include<conio.h>
void Display(int iNo)
{
    if(iNo < 10)
    {
        printf("\n Hello");
    }
    else
    {
        printf("\n Demo");
    }

}
int main()
{
    int iValue = 0;
    printf("\n Enter Numbber :");
    scanf("%d",&iValue);
    Display(iValue);
    getch();
    return 0;
}