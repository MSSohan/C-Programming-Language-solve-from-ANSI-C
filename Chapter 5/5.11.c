#include<conio.h>
#include<stdio.h>
void main()
{
float Len,Hei,Hyp;
float Temp1,Temp2;

printf("Enter Length Height and Hypotenes of Triangle\n");
scanf("%f %f %f",&Len,&Hei,&Hyp);

Temp1=Hyp*Hyp;
Temp2=Len*Len+Hei*Hei;

if(Temp1==Temp2)
   printf("The Triangle is Right Angle Triangle\n");
else
   printf("The Triangle is Not a Right Angle Triangle\n");

}
