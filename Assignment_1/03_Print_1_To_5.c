#include<stdio.h>
#include<conio.h>
int Display()
{
    int i=0;
    for(i=5;i>0;i--)
    printf("\n %d",i);
    i++;
}
int main()
{
    Display();
    getch();
    return 0;
}