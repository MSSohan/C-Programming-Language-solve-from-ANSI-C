#include<stdio.h>
#include<conio.h>
void main()
{
long int Num,Temp,sum,Dig;
printf("Enter any Number:\n");
scanf("%ld",&Num);

Temp=Num;
sum=0;

while(Temp!=0)
  {
    Dig=Temp%10;
    Temp=Temp/10;
    sum=sum+Dig;
  }
printf("Rverse of Number %ld is %ld\n",Num,sum);
}

