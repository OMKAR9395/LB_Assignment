

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int Frequency(int iArr[],int iLength,int iNo)
{
    int iCnt = 0 , i;

    for(i = 0 ; i < iLength ; ++i)
    {
        if(iArr[i] == iNo)
        {
            ++iCnt;
        }
    }
    return iCnt;
}
int main()
{
    int iSize = 0 , iRet = 0 , iCnt = 0 , iValue = 0;
    int *p = NULL;

    printf("\nEnter number of elements :");
    scanf("%d",&iSize);

    printf("\nEnter number of element for Search  :");
    scanf("%d",&iValue);

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

    iRet = Frequency(p,iSize,iValue);

    printf("\n%d",iRet);

    free(p);

    getch();
    return 0;
}
