#include<stdio.h>
#include<math.h>
void main()
{
    int x,y,z;
    float a,b,c;
    printf("Enter three value a, b, c:\n");
    scanf("%f %f %f",&a,&b,&c);
    x=ceil(a);
    y=ceil(b);
    z=ceil(c);

    printf("Values Are:\n");
    printf("%d       ",x);
    printf("%d       ",y);
    printf("%d",z);
}
