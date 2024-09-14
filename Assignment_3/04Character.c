////////////////////////////////////////////////////////////
//                                                        //
//    Accept one character from user and convert case of  //
//    that character.                                     //
//    Input : a Output  : A                               //
//    Input : D Output : d                                //
//                                                        //
////////////////////////////////////////////////////////////
#include<stdio.h>
#include<conio.h>
void DisplayConvert(char CValue);
void DisplayConvert(char CValue)
{
    if(CValue >= 'A' && CValue <= 'Z')
    {
        printf("\t%c",CValue +32);
    }
    else if(CValue >= 'a' && CValue <= 'z')
    {
        printf("\t%c",CValue +32);
    }
    else
    {
        printf("\n %c Is Not Character Value",CValue);
    }
}
int main()
{
    char CValue ='\0';

    printf("\n Enter Single Character :");
    scanf("%c",&CValue);

    DisplayConvert(CValue);

    getch();
    return 0;
}
