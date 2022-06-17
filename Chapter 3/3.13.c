#include<stdio.h>

main()
{
    int x,y,z;
    printf("Give three integer value:\n");
    scanf("%d %d %d",&x,&y,&z);

    ((x>y)&&(x>z))?printf("Largest number is %d",x):((y>x)&&(y>z))?printf("Largest number is %d",y):printf("Largest number is %d",z);
}
