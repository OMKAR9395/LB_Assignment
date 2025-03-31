#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int CountEven(int [],int );

int main()
{
    int iSize = 0 , iRet = 0 , iCnt = 0;
    int *p = NULL;

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

    iRet = CountEven(p,iSize);

    printf("\nResult is : %d",iRet);

    free(p);

    getch();
    return 0;
}
int CountEven(int iArr[],int iLength)
{
    int iEven = 0 , iCnt = 0;

    for(iCnt = 0 ; iCnt < iLength ; ++iCnt)
    {
        if(iArr[iCnt] % 2 == 0)
        {
            iEven++;
        }
    }
    return iEven;
}
