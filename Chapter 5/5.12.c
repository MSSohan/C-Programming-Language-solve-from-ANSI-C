#include<conio.h>
#include<stdio.h>
void main()
{
int Units;
char Name[10];
float Charge;
printf("Enter Name of User:\n");
scanf("%s",&Name);
printf("Enetr Total Units Consumed:\n");
scanf("%d",&Units);

if(Units>=0&&Units<=200)
Charge=100+(Units*0.80);
else if(Units>200&&Units<=300)
Charge=100+(Units*0.90);
else if(Units>300&&Units<=400)
Charge=100+Units;
else
Charge=(100+Units)+(100+Units)*0.15;

printf("Name   Units   Charge\n");
printf("%s     %4d     %.2f",Name,Units,Charge);

}
