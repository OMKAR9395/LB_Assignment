#include<stdio.h>
#include<conio.h>
void Display(char ch)
 {
	if(ch>='a'&&ch<='z')
	{
		for(;ch<='z';ch++)
		{
			printf("%c\t",ch);
		}
	}
	else if(ch>='A'&&ch<='Z')
	 {
		 for(;ch<='Z';ch++)
		{
			printf("%c\t",ch);
		}
	 }

 }
int main()
{
	char ch='\0';

	printf("\n Enter Character..");
	scanf("%c",&ch);

	Display(ch);

	getch();
	return 0;
}

