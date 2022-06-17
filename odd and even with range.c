#include<stdio.h>
int main()
{
    int s=0,r=0,i,start,end;
    printf("Enter the lower range:");
    scanf("%d",&start);
    printf("Enter the upper range:");
    scanf("%d",&end);
    printf("\n\n");

   {
    printf("All the even number beetween %d to %d are: \n",start,end);
    for(i=start;i<=end;i++)
     {
       if(i%2==0)
        printf("%d,",i);
     }
     printf("\n\n");
    }

    {
      for(i=start;i<=end;i++)
      {
        if(i%2==0)
         {
           s=s+i;
         }
      }
        printf("The summation of all even number is=%d \n\n\n",s);
    }

    {
     printf("All the odd number beetween %d to %d are: \n",start,end);
     for(i=start;i<=end;i++)
     {
       if(i%2!=0)
       printf("%d,",i);
     }
     printf("\n\n");
    }

   {
     for(i=start;i<=end;i++)
       {
        if(i%2!=0)
           {
             r=r+i;
           }
       }
       printf("The summation of all odd number is=%d \n\n\n",r);
    }
}
