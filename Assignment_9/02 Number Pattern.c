/*
Input : 5
Output : 5 # 4 # 3 # 2 # 1 #
*/
#include<stdio.h>
#include<conio.h>

void pattern(int);

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
	for(;iNo!=0;iNo--)
	{
		printf("%d\t#\t",iNo);
	}
}