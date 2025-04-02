
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int Difference(int iArr[],int iLength)
{
    int i = 0 , iMin = 0 , iMax = 0;
    iMax = iMin = iArr[i];
    for( i = 0 ; i < iLength ; ++i)
    {
        if(iArr[i] < iMin)
        {
            iMin = iArr[i];
        }
        if(iArr[i] > iMax)
        {
            iMax = iArr[i];
        }
    }
    return iMax - iMin;
}
int main()
{
    int iSize = 0 , iRet = 0, iCnt = 0 , *p = NULL;

    printf("\nEnter Number of Elements : ");
    scanf("%d",&iSize);

    p = (int*)malloc(iSize*sizeof(int));

    if( p == NULL)
    {
        printf("\nUnable to Allocate Memory");
        return -1;
    }

    printf("\n------ Enter %d Element -------",iSize);
    for(iCnt = 0 ; iCnt < iSize ; ++iCnt)
    {
        printf("\nEnter %d Element : ",iCnt+1);
        scanf("%d",&p[iCnt]);
    }

    iRet = Difference(p,iSize);

    printf("\nDifference between Largest & Smallest Number is %d.",iRet);

    free(p);

    getch();
    return 0;
}

