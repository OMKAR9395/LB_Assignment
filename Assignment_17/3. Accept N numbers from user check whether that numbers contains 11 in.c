
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;

BOOL Check(int iArr[],int iLength)
{
    int iCnt = 0;

    for(iCnt = 0 ; iCnt < iLength ; ++iCnt)
    {
        if(iArr[iCnt] == 11)
        {
            return TRUE;
        }
    }
    return FALSE;
}
int main()
{
    int iSize = 0 , iCnt = 0;
    int *p = NULL;
    BOOL bRet = FALSE;

    printf("\nEnter number of elements :");
    scanf("%d",&iSize);

    p = (int*)malloc(iSize * sizeof(int));

    if(p == NULL)
    {
        printf("\nUnable to allocate memory");
        return -1;
    }

    printf("\nEnter %d elements ->\n\n",iSize);

    for(iCnt = 0 ; iCnt < iSize ; ++iCnt)
    {
        printf("Enter Element %d : ",iCnt+1);
        scanf("%d",&p[iCnt]);
    }

    bRet = Check(p,iSize);

    if(bRet == TRUE)
    {
        printf("\n11 is Present.");
    }
    else
    {
        printf("\n11 is Absent.");
    }

    free(p);

    getch();
    return 0;
}

