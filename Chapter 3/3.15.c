#include<stdio.h>
#include<math.h>
#include<conio.h>
void main()
{
 int x,y,z,sum;
 float avg;
 printf("Enter three number: \n");
 scanf("%d %d %d",&x,&y,&z);

 sum=x+y+z;
 printf("The summation is %d \n",sum);
 avg=(x+y+z)/3;
 printf("Average is %.2f \n",avg);

 {
    if(x>y&&x>z)
     {
       printf("Largest number is %d\n",x);
     }
    else if(y>x&&y>z)
     {
       printf("Largest number is %d\n",y);
     }
    else
       printf("Largest number is %d\n",z);
 }
 {
    if(x<y&&x<z)
     {
       printf("Smallest number is %d\n",x);
     }
    else if(y<x&&y<z)
     {
       printf("Smallest number is %d\n",y);
     }
    else
       printf("Smallest number is %d\n",z);
 }
 getch();
}
