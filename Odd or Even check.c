#include<stdio.h>
int main()
{
    int number;
    printf("Enter an integer:",number);
    scanf("%d",&number);
    if (number % 2 ==0)
        printf("The number %d is even \n\n\n",number);
    else
        printf("The number %d is odd \n\n\n",number);

}
