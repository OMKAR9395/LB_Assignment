#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int LastOcc(int iArr[],int iLength,int iNo)
{
    int i = 0 , iLast = -1;

    for( i = 0 ; i < iLength ; ++i)
    {
        if(iArr[i] == iNo)
        {
            iLast = i;
        }
    }
    return iLast;
}
int main()
{
    int iSize = 0 , iRet = 0, iCnt = 0 , iValue = 0 , *p = NULL;

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

    iRet = LastOcc(p,iSize,iValue);

    if( iRet == -1)
    {
        printf("\n-1\nThere is no such number .");
    }
    else
    {
        printf("\nLast occurrence of number is %d.",iRet);
    }
    free(p);

    getch();
    return 0;
}
