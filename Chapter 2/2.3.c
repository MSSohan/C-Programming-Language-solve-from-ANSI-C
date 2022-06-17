#include<stdio.h>
int main()
{
    int s,i,n;
    printf("Enter an integer: ");
    scanf("%d",&n);
    printf("All the even number beetween 1 to %d are: \n",n);
    for(i=1;i<=n;i++)
     {
       if(i%2==0)
        printf("%d, ",i);
     }
}
