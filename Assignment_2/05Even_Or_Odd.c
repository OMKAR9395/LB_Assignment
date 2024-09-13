//////////////////////////////////////////////////////////
//    Accept number from user and check whether number  //
//    Is even or Odd                                    //
//                                                      //
//////////////////////////////////////////////////////////
#include<stdio.h>
#include<conio.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;
BOOL ChkEven(BOOL);
BOOL ChkEven(int iNo)
{
    if(iNo % 2 == 0)
    {
        return TRUE;
    }
    else 
    {
         return FALSE;
    }
   
}
int main()
{
    int iValue = 0;
    BOOL bRet = FALSE;

    printf("\n Enter Number :");
    scanf("%d",&iValue);
    bRet = ChkEven(iValue);

    if(bRet == TRUE)
    {
        printf("\n Given %d Number Is Even",iValue);
    }
    else
    {
        printf("\n Given %d Number Is Odd",iValue);
    }
    getch();
    return 0;

}