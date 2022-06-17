#include<stdio.h>

main()
{
    float n;
    scanf("%f",&n);

    printf("fixed-point format (correct to two decimal places): %.2f\n",n);
    printf("fixed-point format (correct to five decimal places): %.5f\n",n);
    printf("fixed-point format (correct to zero decimal places): %f\n",n);
}
