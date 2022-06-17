#include<stdio.h>
#include<math.h>
void main()
{
float a,b,c,s;
scanf("%f %f %f",&a,&b,&c);
double area;
s=(a+b+c)/2;
area=sqrt(s*(s-a)*(s-b)*(s-c));
printf("The triangle area is %.2f",area);
}
