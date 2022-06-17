#include<stdio.h>
#include<math.h>

void main()
{
    float a,b,c,d;
    int w,x,y,z,i;

    printf(" a=");
    scanf("%f",&a);

    w=ceil(a);
    x=floor(a);
    y=round(a);

    printf("\n Ceiling \n");
    for(i=1;i<=w;i++)
    {
        printf(" *");
    }
    printf("\n Flooring \n");
    for(i=1;i<=x;i++)
    {
        printf("*\n");
    }
     printf(" Rounding \n");
    for(i=1;i<=y;i++)
    {
        printf("*\n");
    }
}
