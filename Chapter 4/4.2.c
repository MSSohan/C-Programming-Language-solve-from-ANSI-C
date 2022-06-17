#include<stdio.h>
#include<math.h>
main()
{
    float x,y,a,b,c;
    printf("Enter the value:\n");
    scanf("%f %f",&x,&y);

    a=((x+y)/(x-y));
    b=(x+y)/2;
    c=((x+y)*(x-y));

    printf("a=%f    b=%f    c=%f\n",a,b,c);

}
