//////////////////////////////////////////////////////////////////////////////////////////
//      2. Accept number of rows and number of columns from user and display
//      below pattern.
//      Input : iRow = 4 iCol = 3
//      Output : 1 2 3
//      1 2 3
//      1 2 3
//      1 2 3
///////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<conio.h>

void Pattern(int,int);
int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("\n Enter number of rows and columns:");
    scanf("%d %d",&iValue1, &iValue2);

    Pattern(iValue1, iValue2);

    getch();
    return 0;
}
void Pattern(int iRow, int iCol)
{
    int iCnt=0,i=0;

	for(iCnt=1;iCnt<=iRow;iCnt++)
	{
		for(i=1;i<=iCol;i++)
		{
			printf(" %d",i);
			
		}
		printf("\n");
	}
}