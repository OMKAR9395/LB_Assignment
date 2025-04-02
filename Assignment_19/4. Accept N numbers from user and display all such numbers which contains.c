
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void Digits(int iArr[],int iLength)
{
    int i = 0 ;

    for( i = 0 ; i < iLength ; ++i)
    {
        if(iArr[i] > 99 && iArr[i] < 1000)
        {
            printf("\t%d",iArr[i]);
        }
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

    Digits(p,iSize);

    free(p);

    getch();
    return 0;
}

