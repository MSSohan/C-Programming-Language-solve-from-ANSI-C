#include<stdio.h>
#include<math.h>
#define pi 3.1416
main()
{
int x1=2,y1=2,x2=5,y2=6;
float d,r,p,a;
d=sqrt(pow((x2-x1),2)+pow((y2-y1),2));
r=d/2;
p=2*pi*r;
a=pi*r*r;
printf("The circle perimeter is %.3f and area is %.2f",p,a);
}
