#include<stdio.h>
#include<conio.h>

int Difference(char *str)
{
    int i = 0 , iCapital = 0, iSmall = 0, iAnother = 0;

    while(str[i] != '\0')
    {
        if(str[i] >= 97 && str[i] <= 122)
        {
            iSmall++;
        }
        else if(str[i] >= 65 && str[i] <= 90)
        {
            iCapital++;
        }
        else
        {
            iAnother++;
        }
        i++;
    }
    return iSmall - iCapital;
}
int main()
{
    char cArr[20] = "";
    int iRet = 0;

    printf("\nEnter the String : ");
    scanf("%[^'\n']s",&cArr);

    iRet = Difference(cArr);

    printf("\n%d",iRet);

    getch();
    return 0;
}

