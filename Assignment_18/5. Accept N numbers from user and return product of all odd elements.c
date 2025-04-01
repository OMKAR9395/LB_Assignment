
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int Product(int iArr[],int iLength)
{
    int i = 0 , iProduct = 1 ;
    for( i = 0 ; i < iLength ; ++i)
    {
        if(iArr[i] % 2 != 0 )
        {
            iProduct *= iArr[i];
        }
    }
    return iProduct;
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

    printf("\nEnter %d Element => ",iSize);
    for(iCnt = 0 ; iCnt < iSize ; ++iCnt)
    {
        printf("\nEnter %d Element : ",iCnt+1);
        scanf("%d",&p[iCnt]);
    }

    iRet = Product(p,iSize);

    if(iRet == 1)
    {
        iRet = 0;
    }
    printf("\nProduct is %d.",iRet);

    free(p);

    getch();
    return 0;
}

