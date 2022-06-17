#include<stdio.h>
#include<math.h>

void main()
{
    int m,n,x;
    printf("Enter two integer value:\n");
    scanf("%d %d",&m,&n);

    x=m%n;

    if(x==0)
        printf("%d is multiple of %d\n",m,n);
    else
        printf("%d is not multiple of %d\n",m,n);
}
