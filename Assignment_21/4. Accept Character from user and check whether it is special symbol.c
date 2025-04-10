
/////////////////////////////////////////////////////////////////
//
//	Accept Character from user and
//  Chaeck whether it is Special character or not
//
///////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdbool.h>

 bool ChkAlpha(char ch)
 {
	 bool bRet=false;
	 if(ch=='!'||ch=='@'||ch=='#'||ch=='$'||ch=='%'||ch=='^'||ch=='&'||ch=='*')
	 {
		 bRet= true;
	 }
	 return bRet;
 }
int main()
{
	char cValue='\0';
	bool bRet=false;

	printf("Enter the charcter :");
	scanf("%c",&cValue);

	bRet=ChkAlpha(cValue);

	if(bRet==true)
	{
		printf("%c is Special Character..",cValue);
	}
	else
	{
		printf("%c is not Special Character..",cValue);
	}
	return 0;
}


