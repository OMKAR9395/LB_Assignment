
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void DigitSum(int iArr[],int iLength)
{
    int i = 0 , iDigit = 0,  iTemp = 0 , iSum = 0;

    for( i = 0 ; i < iLength ; ++i)
    {
        iTemp = iArr[i];
        iSum = 0;
        while(iTemp > 0)
        {
            iDigit = iTemp%10;
            iSum += iDigit;
            iTemp /= 10;
        }
        printf("\t%d",iSum);
    }
}
int main()
{
    int iSize = 0 , iCnt = 0 , *p = NULL;

    printf("\nEnter Number of Elements : ");
    scanf("%d",&iSize);

    p = (int*)malloc(iSize*sizeof(int));

    if( p == NULL)
    {
        printf("\nUnable to Allocate Memory");
        return -1;
    }

    printf("\n------ Enter %d Element -------\n",iSize);
    for(iCnt = 0 ; iCnt < iSize ; ++iCnt)
    {
        printf("\nEnter %d Element : ",iCnt+1);
        scanf("%d",&p[iCnt]);
    }

    DigitSum(p,iSize);

    free(p);

    getch();
    return 0;
}

