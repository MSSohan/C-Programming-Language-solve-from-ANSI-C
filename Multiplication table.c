#include<stdio.h>
void main()
{
int i,j,n;
scanf("%d",&n);
printf("Multiplication table from 1 to %d \n",n);
for(i=1;i<=10;i++)
   {
    for(j=1;j<=n;j++)
    {
     if(j<=n-1)
      printf("%dx%d = %d, ",j,i,i*j);
       else
      printf("%dx%d = %d",j,i,i*j);
     }
    printf("\n");
   }
}
