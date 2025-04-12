
#include<stdio.h>
#include<conio.h>
#include<string.h>
void Reverse(char *str)
{
    int i = 0 , j = 0;
    char ch = '\0';

    j = strlen(str);
    j--;
    while(str[i] != '\0')
    {
        ch = str[i];
        str[i] = str[j];
        str[j] = ch;
        ++i;
        --j;
        if(i > j)
        {
            break;
        }
    }
    printf("%s",str);
}
int main()
{
    char cArr[20] = "";

    printf("\nEnter the String : ");
    scanf("%[^'\n']s",&cArr);

    Reverse(cArr);

    getch();
    return 0;
}

