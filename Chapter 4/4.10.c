#include<stdio.h>
#include<conio.h>
void main()
{
  char Name1[10],Name2[10];
  int Code1,Code2;
  float Price1,Price2;
  printf("Enter Name, Code and Price\n");
  scanf("%s%d%f",&Name1,&Code1,&Price1);

  printf("Enter Name, Code and Price\n");
  scanf("%s%d%f",&Name2,&Code2,&Price2);

  printf("Name              Code                Price\n");
  printf("%-7s         %-8d         %8.2f\n",Name1,Code1,Price1);
  printf("%-7s         %-8d         %8.2f\n",Name2,Code2,Price2);
 }
