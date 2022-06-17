#include<stdio.h>
main()
{
    int i;
    float x[10],total=0.0;

    for(i=0;i<10;i++)
    {
        scanf("%f",&x[i]);
        total=total+x[i]*x[i];
        printf("x[%2d]=%5.2f\n",i+1,x[i]);
    }
    printf("\n");
    printf("\ntotal=%.2f\n",total);
}
