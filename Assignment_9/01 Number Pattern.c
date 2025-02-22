/*
Input : 5
Output : A B C D E
*/

#include <stdio.h>
#include<conio.h>

void pattern(int);

int main()
{
	int iValue=0;
	printf("Enter number of element : ");
	scanf("%d",&iValue);
	pattern(iValue);
	return 0;
}
void pattern(int iNo)
{
	int iCnt=0;
	char Ch='A';
	for(iCnt=1;iCnt<=iNo;iCnt++,Ch++)
	{
		printf("%c\t",Ch);
	}
}