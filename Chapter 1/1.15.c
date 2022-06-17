#include<stdio.h>
#include<math.h>
main()
{
float a,b,add,sub,mul,div;
scanf("%f %f",&a,&b);
add=a+b;
sub=a-b;
mul=a*b;
div=(a/b);
printf(" X      = %.f         Y         = %.f \n Sum    = %.3f     Difference= %.3f \n Product= %.3f    Division  = %.3f \n\n\n",a,b,add,sub,mul,div);
}
