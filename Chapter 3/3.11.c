#include<stdio.h>
#include<math.h>

main()
{
    int x,sum,sum1,sum2,sum3,sum4;
    printf("Give four digit integer: \n");
    scanf("%d",&x);

    sum1=x%10;
    x=x/10;

    sum2=x%10;
    x=x/10;

    sum3=x%10;
    x=x/10;

    sum4=x%10;
    x=x/10;

    sum=sum1+sum2+sum3+sum4;

    printf("The sum of its digits=%d \n\n",sum);
}
