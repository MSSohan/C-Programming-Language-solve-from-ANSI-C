#include<stdio.h>
#include<conio.h>
void main()
{
int y;
float x;
printf("Enter the value of X: ");
scanf("%f",&x);

if(x>0)
  {
    y=1;
    printf("The value of y=%d for the given value of x=%f\n",y,x);
  }
else
  {
    if(x==0)
       {
         y=0;
         printf("The value of y=%d for the given value of x=%f\n",y,x);
       }
    else
       {
         y=-1;
         printf("The value of y=%d for the given value of x=%f\n",y,x);
       }
   }
getch();
}
