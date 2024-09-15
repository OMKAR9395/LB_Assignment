/////////////////////////////////////////////////////////////////////////////
//                                                                         // 
//   Write a program which accept number from user and display its         //
//   factors in decreasing order.                                          // 
//                                                                         //
//   Input : 12                                                            //
//   Output : 6 4 3 2 1                                                    // 
//   Input : 13                                                            // 
//   Output: 1                                                             //  
//   Input: 10                                                             // 
//   Output: 5  2   1                                                      //
//                                                                         //
/////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<conio.h>
void FactRev(int iNo)
{
    int i  = 0;
	if(iNo<=0)
	{
		iNo=-iNo;
	}
	for(i=iNo-1;i>0;i--)
	{
		if(iNo%i==0)
		{
			printf("%d\t",i);
		}
	}
}
int main()
{
    int iValue =0;

    printf("\n Enter Number :");
    scanf("%d",&iValue);

    FactRev(iValue);

    return 0;
}