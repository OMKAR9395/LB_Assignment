
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void Renge(int iArr[],int iLength,int iStart,int iEnd)
{
    int i = 0 ;
    printf("\nElement : ");
    for( i = 0 ; i < iLength ; ++i)
    {
        if(iArr[i] >= iStart && iArr[i] <= iEnd )
        {
            printf("\t%d",iArr[i]);
        }
    }
}
int main()
{
    int iSize = 0 , iRet = 0, iCnt = 0 , iValue1 = 0 ,iValue2 = 0 , *p = NULL;

    printf("\nEnter Number of Elements : ");
    scanf("%d",&iSize);

    printf("\nEnter the starting point => ");
    scanf("%d",&iValue1);
    printf("\nEnter the ending point => ");
    scanf("%d",&iValue2);

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

    Renge(p,iSize,iValue1,iValue2);

    free(p);

    getch();
    return 0;
}

