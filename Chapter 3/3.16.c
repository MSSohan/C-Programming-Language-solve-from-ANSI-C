#include<stdio.h>

void main()
{
  float Cus1,Cus2,Bill1,Bill2;
  printf("Enter Numbers of Call of Customer 1:\n");
  scanf("%f",&Cus1);
  printf("Enter Numbers of Call of Customer 2:\n");
  scanf("%f",&Cus2);

  Cus1<=100;
  Cus2<=100;
  Bill1=250;
  Bill2=250;
  Bill1=(250+Cus1*1.25);
  Bill2=(250+Cus2*1.25);

  printf("Mobile Bill of Customer 1:%0.2f\n",Bill1);
  printf("Mobile Bill of Customer 2:%0.2f\n",Bill2);

}
