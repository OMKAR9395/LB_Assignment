//////////////////////////////////////////////////////////////////////////////////////
//  Write a program which accept radius of circle from user and calculate its area. // 
//  Consider value of PI as 3.14. (Area = PI * Radius * Radius)                     //
//  Input : 5.3                                                                     //
//  Output : 88.2026                                                                //
//  Input : 10.4                                                                    //
//  Output : 339.6224                                                               //
//////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<conio.h>
double CircleArea(float fRadius);
double CircleArea(float fRadius)
{
double Area = 0.0;
	float PI=3.14;
	Area=((PI*fRadius*fRadius));
	return Area;
}
int main()
{
        float fValue = 0.0;
        double dRet = 0.0;
        printf("\n Enter a Radius :");
        scanf("%f",&fValue);
        dRet = CircleArea(fValue);
        printf("\n Area Of Circle Is %lf",dRet);
        getch();
        return 0;
}