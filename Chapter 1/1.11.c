#include<stdio.h>
#include<math.h>
main()
{
float x1,x2,y1,y2,D;
scanf("%f %f %f %f",&x1,&y1,&x2,&y2);
D=sqrt(pow((x2-x1),2)+pow((y2-y1),2));
printf("Distance between two point is %.2f",D);
}
