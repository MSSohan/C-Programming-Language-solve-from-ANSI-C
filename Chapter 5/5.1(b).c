#include<stdio.h>
main()
{
    int number;
    printf("Enter an integer:",number);
    scanf("%d",&number);
    if (number % 2 ==0)
        printf("\nThe number %d is even \n\n\n",number);
    else
        printf("\nThe number %d is odd \n\n\n",number);

}
