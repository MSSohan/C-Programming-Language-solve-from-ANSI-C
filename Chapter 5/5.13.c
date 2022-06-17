#include<conio.h>
#include<stdio.h>
void main()
{
int Sum,i,Count;
Sum=Count=0;
i=0;
Loop:
if((i%6==0)&&(i%4!=0))
  {
     printf("%d ",i);
     Count=Count+1;
     Sum=Sum+i;
  }
  i=i+1;
  if(i<=100)
goto Loop;
printf("\n\nSum of Numbers is %d\n",Sum);
printf("Count of Numbers is %d\n",Count);

}
