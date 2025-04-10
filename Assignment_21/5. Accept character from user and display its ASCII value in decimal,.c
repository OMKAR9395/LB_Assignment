#include<stdio.h>
#include<conio.h>
 void Display(char ch)
 {
	 printf("Decimal Symbol Hexadecimal Octal\n");
	 printf("%d\t%c\t0X%X\t%o\n",ch,ch,ch,ch);
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

