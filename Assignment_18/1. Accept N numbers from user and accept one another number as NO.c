#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define FALSE 0
#define TRUE 1

typedef int BOOL;

BOOL Check(int [],int,int );

int main()
{
    int iSize = 0 , iRet = 0, iCnt = 0 , iValue = 0;
    int *p = NULL;
    BOOL bRet = FALSE;

    printf("\nEnter Number of Elements : ");
    scanf("%d",&iSize);

    printf("\nEnter Element That You Search => ");
    scanf("%d",&iValue);

    p = (int*)malloc(iSize*sizeof(int));

    if( p == NULL)
    {
        printf("\nUnable to Allocate Memory");

        return -1;
    }

    printf("\nEnter %d Element => ",iSize);
    for(iCnt = 0 ; iCnt < iSize ; ++iCnt)
    {
        printf("\nEnter %d Element : ",iCnt+1);
        scanf("%d",&p[iCnt]);
    }

    bRet = Check(p,iSize,iValue);

    if( bRet == TRUE)
    {
        printf("\nNumber is Present.");
    }
    else
    {
        printf("\nNumber is Absent.");
    }
    free(p);

    getch();

    return 0;
}
BOOL Check(int iArr[],int iLength,int iNo)
{
    int i = 0;

    for( i = 0 ; i < iLength ; ++i)
    {
        if(iArr[i] == iNo)
        {
            return TRUE;
        }
    }
    return FALSE;
}
