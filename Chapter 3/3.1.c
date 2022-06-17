#include<stdio.h>
void main()
{
int x,y,z,a;
printf("Enter the value:");
scanf("%d %d %d",&x,&y,&z);
a=x;
x=y;
y=z;
z=a;

printf(" X=%d \n Y=%d \n Z=%d",x,y,z);

}
