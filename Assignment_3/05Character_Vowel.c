/////////////////////////////////////////////////////////////////
//                                                             //
//    Accept on character from user and check whether that     //
//    character is vowel                                       //
//    (a,e,i,o,u) or not.                                      //
//                                                             //
//        Input : E Output : TRUE                              //
//        Input : d Output : FALSE                             //
//                                                             //
/////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<conio.h>
typedef int BOOL;
#define TRUE 1;
#define FALSE 0;
char ChkVowel (char Ch);
char ChkVowel (char Ch)
{
    if(Ch=='a'||Ch=='A'||Ch=='e'||Ch=='E'||Ch=='i'||Ch=='I'||Ch=='o'||Ch=='O'||Ch=='u'||Ch=='U')
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}
int main()
{
    char cValue='\0';
    BOOL bRet = FALSE;

    printf("\n Enter Character :");
    scanf("%c",&cValue);

    bRet = ChkVowel(cValue);

    if(bRet == 1)
    {
        printf("\n It Is Vowel");
    }
    else
    {
        printf("\n It Is Not Vowel");
    }
    getch();
    return 0;
}