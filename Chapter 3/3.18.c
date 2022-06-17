#include<stdio.h>
#include<math.h>
main()
{
    int i,y;
    float x;
    printf("Number\tSquare root\tSquare\n\n");
    for(i=0;i<=100;i++)
    {
     x=sqrt(i);
     y=i*i;
     printf("%d\t%.2f\t%d\n",i,x,y);
     }
    getch();
}
