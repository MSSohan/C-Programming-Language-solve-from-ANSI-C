#include<stdio.h>
void main()
{
   int n,i;

   printf("Enter the number: ");
   scanf("%d",&n);

   for (i=2;i<=n-1;i++)
       {
           if (n%i==0)
           {
               if(n%2==0)
                {
                    printf("%d is even number but not prime number \n",n);
                    break;
                }
                else
                {
                    printf("%d is odd number but not prime number \n",n);
                    break;
                }
           }
       }
       if (i==n)
       {
           if(n%2==0)
                printf("%d is both even & prime number \n", n);
            else
                printf("%d is both odd & prime number \n", n);
       }
}

