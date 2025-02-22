/*

Input : 5
Output : 1 * 2 * 3 * 4 * 5 *

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
		printf("%d\t*\t",iCnt);
	}
}