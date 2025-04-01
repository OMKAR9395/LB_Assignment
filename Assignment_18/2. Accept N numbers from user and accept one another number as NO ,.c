
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int FirstOcc(int iArr[],int iLength,int iNo)
{
    int i = 0;

    for( i = 0 ; i < iLength ; ++i)
    {
        if(iArr[i] == iNo)
        {
            return i;
        }
    }
    return -1;
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

    iRet = FirstOcc(p,iSize,iValue);

    if( iRet == -1)
    {
        printf("\nNumber is not Occured .");
    }
    else
    {
        printf("\nNumber is Occurred at index %d.",iRet);
    }
    free(p);

    getch();
    return 0;
}
