#include<stdio.h>
#include<math.h>
main()
{
    float i,n;
    float sum=0;
    printf("Enter the integer: ");
     scanf("%f",&n);
    for(i=1;i<=n;i++)
        sum=sum+(1/i);
    printf("The summation is %.2f",sum);
}
