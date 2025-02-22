/////////////////////////////////////////////////////////////////////////////////////////
//
// 	Write a program which accept range from user and 
//  display all even numbers in between that range.
//	Input : 23 35
// 	Output : 24 26 28 30 32 34
//
/////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <conio.h>
void RangeDisplayEven(int,int);

int main()
{
	int iValue1=0,iValue2=0;
	
	printf("Enter Starting number..");
	scanf("%d",&iValue1);
	
	printf("Enter Ending number..");
	scanf("%d",&iValue2);
	
	RangeDisplayEven(iValue1,iValue2);

    getch();
	return 0;
}
void RangeDisplayEven(int iStart,int iEnd)
{
	
	if(iStart>iEnd)
	{
		printf("You enter wrong input,%d is grater than %d",iStart,iEnd);
		return;
	}

	for(iStart;iStart<=iEnd;iStart++)
	{
		if(iStart%2==0)
		{
			printf("%d\t",iStart);
		}
	}
}