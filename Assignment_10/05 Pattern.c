/////////////////////////////////////////////////////////////////////////////
//
//      5. Accept number of rows and number of columns from user and display
//      below pattern.
//      Input : iRow = 4 iCol = 4
//      Output :1 1 1 1
//              2 2 2 2
//              3 3 3 3
//              4 4 4 4
//
/////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<conio.h>

void Pattern(int,int);

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("\n Enter number of rows and columns :");
    scanf("%d %d",&iValue1, &iValue2);

    Pattern(iValue1, iValue2);

    getch();
    return 0;
}
void Pattern(int iRow, int iCol)
{
    int i=0,j=0;

	for(i=1;i<=iRow;i++)
	{
		for(j=1;j<=iCol;j++)
		{

            printf(" %d",i);

		}
		printf("\n");
	}
}
