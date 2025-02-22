/////////////////////////////////////////////////////////////////////////////////////////
//
// 	Write a program which accept range from user and 
//	display all numbers in between that range.
//	Input : 23 35
// 	Output : 23 24 25 26 27 28 29 30 31 32 33 34 35
//
/////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include<conio.h>

void RangeDisplay(int,int);

int main()
{
	int iValue1=0,iValue2=0;
	
	printf("Enter Starting number..");
	scanf("%d",&iValue1);
	
	printf("Enter Ending number..");
	scanf("%d",&iValue2);
	
	RangeDisplay(iValue1,iValue2);

    getch();
	return 0;
}
void RangeDisplay(int iStart,int iEnd)
{
	if(iStart>iEnd)
	{
		printf("You enter wrong input,%d is grater than %d",iStart,iEnd);
		return;
	}

	for(iEnd;iEnd>=iStart;iEnd--)
	{
		printf("%d\t",iEnd);
	}
}