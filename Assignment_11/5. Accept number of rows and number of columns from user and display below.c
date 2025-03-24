#include<stdio.h>
#include<conio.h>

void Pattern(int,int);

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("\n Enter number of rows and columns :");
    scanf("%d %d",&iValue1, &iValue2);

    Pattern(iValue1, iValue2);

    getch();
    return 0;
}
void Pattern(int iRow, int iCol)
{
    int i = 0 , j = 0 ,Num = 1;
    for( i = iRow; i >= 1 ;i--)
    {
        for( j = 1 ; j <= iCol ;j++ ,Num++)
        {
            printf(" %d",Num);
        }
        printf("\n");
    }
}


