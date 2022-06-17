#include<stdio.h>
#include<math.h>
#define pi 3.1416
main()
{
int x1=0,y1=0,x2=4,y2=5;
float r,p,a;
r=sqrt(pow((x2-x1),2)+pow((y2-y1),2));
p=2*pi*r;
a=pi*r*r;
printf("The circle perimeter is %.3f and area is %.2f",p,a);
}
