#include<stdio.h>

void main()
{
  int x,a,i;
  printf("Enter the integer number:");
  scanf("%d",&x);
  printf("%d\n",x);
  for(i=100000;i<=x;i=i/10)
     {
     a=x%i;
     printf("%d\n",a);
     }
}
