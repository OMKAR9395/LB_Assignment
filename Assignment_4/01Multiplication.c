/////////////////////////////////////////////////////////////////////
//                                                                 //
//   Write a program which accept number from user and display its //
//   multiplication of factors                                     //               
//                                                                 // 
//   Input : 12                                                    //
//   Output : 144 (1 * 2 * 3 * 4 * 6)                              //
//   Input : 13                                                    //
//   Output : 1 (1)                                                //
//   Input : 10                                                    //
//   Output : 10 (1 * 2 * 5                                        //
//                                                                 //
/////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<conio.h>
int MultFact(int iNo);
int MultFact(int iNo)
{
    int i=0,Fact=0;

    if(iNo <= 0)
    {
        iNo = -iNo;
    }
    Fact = 1;
    for(i=1;i<iNo;i++)
    {
        if(iNo % i == 0)
        {
            Fact = Fact * i;
        }
    }
    return Fact;
}
int main()
{
    int iValue = 0,iRet = 0;

    printf("\n Enter Number :");
    scanf("%d",&iValue);

    iRet = MultFact(iValue);

    printf("\t%d",iRet);

    getch();
    return  0;
}