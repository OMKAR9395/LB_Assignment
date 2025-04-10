#include<stdio.h>
#include<conio.h>

void DisplayASCII()
{
    int i = 0;
    printf("\n\tDec\tHex\tOct\tCharacter\n");
    for( i = 0 ; i <= 255 ; ++i)
    {
        printf("\t %d\t %x\t %o\t %c\n",i,i,i,i);
    }
}
int main()
{
    DisplayASCII();

    return 0;
}
