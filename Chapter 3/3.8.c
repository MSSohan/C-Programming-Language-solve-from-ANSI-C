#include<stdio.h>
void main()
{
 int u,t,a,l,m;
 float Dis;
 printf("Enter the value of u,a\n");
 scanf("%d %d",&u,&a);
 printf("Enter the lower time limit: \n");
 scanf("%d",&l);
 printf("Enter the upper time limit: \n");
 scanf("%d",&m);
 printf("The time range is between %d to %d \n\n\n",l,m);
 for(t=l;t<=m;t++)
  {
    Dis=(u*t)+(a*(t*t))/2;
    printf("The distance is :  %0.1f \n",Dis);
  }
 getch();
}
