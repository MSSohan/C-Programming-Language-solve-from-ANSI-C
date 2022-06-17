#include<stdio.h>

void main()
{
  int x,a,i;
  printf("Enter the integer number:");
  scanf("%d",&x);

  for(i=10;i<=x;i=i*10)
     {
     a=x%i;
     printf("%d\n",a);
     }
 printf("%d \n",x);
}
