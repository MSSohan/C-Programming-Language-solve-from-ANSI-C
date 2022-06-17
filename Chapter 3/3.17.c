#include<stdio.h>
#include<math.h>
#define pi 3.1416
#define Max 180
void main()
{
 int i;
 float x,y,z;
 printf("x(degree)\t    sin(x)\t    cos(x)\n");
 for (i=0;i<=Max;i=i+15)
 {
    x=(pi/Max)*i;
    y=sin(x);
    z=cos(x);
    printf("%d\t    %f\t   %f\n",i,y,z);
 }
}
