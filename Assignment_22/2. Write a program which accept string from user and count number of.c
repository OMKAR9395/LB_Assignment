#include<stdio.h>
#include<conio.h>
#include<string.h>

int CountSmall(char *str)

{
    int i = 0 , iCnt = 0;

    while(str[i] != '\0')
    {
        if(str[i] >= 97 && str[i] <= 122)
        {
            iCnt++;
        }
        i++;
    }
    
    return iCnt;
    
}

int main()
{
    char cArr[20] = "";
    int iRet = 0;

    printf("\nEnter the String : ");
    scanf("%[^'\n']s",&cArr);

    iRet = CountSmall(cArr);

    printf("\n%d",iRet);

    getch();
    return 0;
}