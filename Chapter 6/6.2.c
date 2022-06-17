#include<stdio.h>
#include<conio.h>
void main()
{
long int n,i,Fact;
printf("Enter any Number:");
scanf("%ld",&n);

Fact=1;
for(i=0;i<n;i++)
{
    Fact=Fact*(n-i);
}
printf("Factorial of Number %ld is %ld\n",n,Fact);
}
