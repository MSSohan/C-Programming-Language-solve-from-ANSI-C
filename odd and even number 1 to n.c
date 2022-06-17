#include<stdio.h>
int main()
{
    int s=0,r=0,i,n;
    printf("Enter an integer:");
    scanf("%d",&n);
    printf("\n\n");

   {
    printf("All the even number beetween 1 to %d are: \n",n);
    for(i=1;i<=n;i++)
     {
       if(i%2==0)
        printf("%d,",i);
     }
     printf("\n\n");
    }

    {
      for(i=2;i<=n;i=i+2)
      s=s+i;
      printf("The summation of all even number is=%d \n\n\n",s);
    }

    {
     printf("All the odd number beetween 1 to %d are: \n",n);
     for(i=1;i<=n;i++)
     {
       if(i%2==1)
       printf("%d,",i);
     }
     printf("\n\n");
    }

    {
     for(i=1;i<=n;i=i+2)
     r=r+i;
     printf("The summation of all odd number is=%d \n\n\n",r);
    }
}
