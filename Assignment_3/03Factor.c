/////////////////////////////////////////////////////////
//                                                     //
//   Write a program which accept number from user     //
//   and print even factors of that                    // 
//   number.                                           //
//                                                     //
/////////////////////////////////////////////////////////
//                                                     //
//  Input  : 36                                        //
//  Output : 2  6  12  18                              //
//                                                     //
/////////////////////////////////////////////////////////
#include<stdio.h>
#include<conio.h>
void DisplayFactor(int iNo)
{
    int i=0;
    if(iNo <= 0)
    {
        iNo = -iNo;
    }
    for(i= 1;i<=iNo;i++)
    {
        if(iNo % i == 0 && i % 2 == 0)
        {
            printf("%d\t",i);
        }
    }
}
int main()
{
    int iValue = 0;

    printf("\n Enter Number :");
    scanf("%d",&iValue);

    DisplayFactor(iValue);

    getch();
    return 0;
}