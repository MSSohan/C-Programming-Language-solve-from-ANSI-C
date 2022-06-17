#include<stdio.h>

void main()
{
  float x;
  int y,z;

  printf("Enter the floating point number:\n");
  scanf("%f",&x);

  y=x;
  z=y%10;

  printf("The floating point number %.2f and the right two digit of the integral part of the number is %d \n",x,z);

}

