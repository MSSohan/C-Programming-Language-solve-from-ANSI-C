#include<stdio.h>

main()
{
    float n;
    printf("The value=");
    scanf("%f",&n);

    printf("Exponential format (correct to two decimal places): %.2e\n",n);
    printf("Exponential format (correct to four decimal places): %.4e\n",n);
    printf("Exponential format (correct to eight decimal places): %.8e\n",n);
}

