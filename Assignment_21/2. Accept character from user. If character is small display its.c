
#include<stdio.h>
#include<conio.h>

void Display(char ch)
 {
	 if(ch>='A'&&ch<='Z')
	 {
		 ch=ch+32;
	 }
	 else if(ch>='a'&&ch<='z')
	 {
		 ch=ch-32;
	 }
	 printf("%c",ch);


 }
int main()
{
	char ch='\0';

	printf("Enter Character..\n");
	scanf("%c",&ch);

	Display(ch);

	getch();
	return 0;
}

