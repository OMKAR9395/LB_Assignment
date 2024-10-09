//////////////////////////////////////////////////////////////////////////////////
//                                                                              //
// Write a program which accept temperature in Fahrenheit and convert it into   //
//  celsius. (1 celsius = (Fahrenheit -32) * (5/9))                             //
//  Input : 10                                                                  //
//  Output : -12.2222 (10 - 32) * (5/9)                                         //
//  Input : 34                                                                  //
//  Output : 1.11111 (34 - 32) * (5/9)                                          //
//                                                                              //
//////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<conio.h>
double FhtoCs(float fTemp)
{
    double Fah=0.0;
      Fah = (fTemp * 9 / 5) + 32;
      
      return Fah;

}
int main()
{
float fValue = 0.0;
double dRet = 0.0;

    printf("\n Enter temperature in ahrenheit :");
    scanf("%lf",&fValue);

    dRet = FhtoCs(fValue);
    printf("\n %.2f Celsius is equal to %.2lf Fahrenheit",fValue,dRet);

    getch();
    return 0;
}