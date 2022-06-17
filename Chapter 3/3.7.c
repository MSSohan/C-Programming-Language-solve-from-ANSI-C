#include<stdio.h>

void main()
{
 int SmallNo,LargeNo;
 float RealNo;
 printf("Enter the real number:");
 scanf("%f",&RealNo);

 SmallNo=RealNo+1;
 LargeNo=RealNo;

 printf("Smallest integer not     The given         Largest integer not \n");
 printf("less than the number     number            greater than the number\n");
 printf("     %d                   %0.2f                  %d    \n", SmallNo,RealNo,LargeNo);

 }


