/*
Input : 8
Output : 2 4 6 8 10 12 14 16
*/
#include<stdio.h>
#include<conio.h>

void pattern(int iNo);

int main()
{
	int iValue=0;
    
	printf("Enter number of element : ");
	scanf("%d",&iValue);

	pattern(iValue);

    getch();
	return 0;
}

void pattern(int iNo)
{
	int iCnt=0;

	for(iCnt=1;iCnt<=iNo;iCnt++)
	{
		printf("%d\t",iCnt*2);
	}
}