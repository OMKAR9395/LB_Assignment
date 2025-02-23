/*
Input : iRow = 4 iCol = 3
Output : 

* * *
* * *
* * *
* * *
*/

#include<stdio.h>
#include<conio.h>

void Pattern(int,int);

int main()
{
	int iValue1=0,iValue2=0;

	printf("Enter number of rows and columns\n");
	scanf("%d%d",&iValue1,&iValue2);

	Pattern(iValue1,iValue2);

    getch();
	return 0;
}

void Pattern(int iRow,int iCol)
{
	int iCnt=0,i=0;
	for(iCnt=1;iCnt<=iRow;iCnt++)
	{
		for(i=1;i<=iCol;i++)
		{
			printf("*\t");
			
		}
		printf("\n");
	}
}