#include<stdio.h>
#include<math.h>

void main()
{
   int x,y,a,b,p,q,s;

   printf("Enter the value x=");
   scanf("%d",&x);
   printf("Enter the value y=");
   scanf("%d",&y);

   a=y%10;
   b=y/10;
   p=a*x;
   q=b*x;
   s=p+(q*10);

   printf("\n             %d",x);
   printf("\n     *       %d",y);
   printf("\n         ________\n");

   printf("%d x %d is    %d\n",a,x,p);
   printf("%d x %d is   %d\n",b,x,q);
   printf("         __________\n");

   printf("Add them    %d\n",s);

}
