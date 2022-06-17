#include<stdio.h>
#include<conio.h>

void main()
{
   int Len,Wid,Peri;
   float Area;

   printf("Enter the  length of the rectangle :\n");
   scanf("%d",&Len);
   printf("Enter width of the rectangle :\n");
   scanf("%d",&Wid);

   Peri= 2*(Len+Wid);

   Area= Len*Wid;

   printf("The perimeter of the rectangle is=%d \n",Peri);
   printf("The area of the rectangle is=%0.2f \n",Area);

}
