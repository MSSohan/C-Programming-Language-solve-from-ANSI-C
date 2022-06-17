#include<stdio.h>

void main()
{
  int x,y,z;

  printf("Enter Three Values:\n");
  scanf("%d %d %d",&x,&y,&z);

  printf("x= %d\n",x);
  printf("y= %d\n",y);
  printf("z= %d\n",z);

  printf("x= %2d    y= %3d    z= %4d\n",x,y,z);

  printf("x= %d    y= %d    z= %d\n",x,y,z);
}
