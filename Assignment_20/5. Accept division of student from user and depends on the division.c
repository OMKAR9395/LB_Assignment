#include<stdio.h>
#include<conio.h>
void DisplaySchedule(char ch)
{
    if( ch == 65 || ch == 97)
    {
        printf("\nYour exam at 7.00 AM");
    }
    else if( ch == 66 || ch == 98)
    {
        printf("\nYour exam at 8.30 AM");
    }
    else if( ch == 67 || ch == 99)
    {
        printf("\nYour exam at 9.20 AM");
    }
    else if( ch == 68 || ch == 100)
    {
        printf("\nYour exam at 10.30 AM");
    }
    else
    {
        printf("\nPlease Enter Correct Division (A-D)!!!");
    }
}
int main()
{
    char cValue = '\0';

    printf("\nEnter Your Division : ");
    scanf("%c",&cValue);

    DisplaySchedule(cValue);

    getch();
    return 0;
}

