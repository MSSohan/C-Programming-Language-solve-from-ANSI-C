#include<stdio.h>
void main()
{
 float Dep,Year_Ser,Pur_Price,Sal_Price;
 printf("Enter Depreciation, Year of Service, Purchase price\n");
 scanf("%f %f %f",&Dep,&Year_Ser,&Pur_Price);
 Sal_Price = Pur_Price-(Dep*Year_Ser);
 printf("The salvage value of an item = %f ",Sal_Price);    getch();
}
