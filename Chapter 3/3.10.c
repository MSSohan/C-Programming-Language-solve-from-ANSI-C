#include<stdio.h>
#include<math.h>
 void main()
 {
  float L,R,LC,UC,i,Freq;
  printf("Enter the Inductance: \n");
  scanf("%f",&L);
  printf("Enter the Resistance: \n");
  scanf("%f",&R);
  printf("Enter the lower Capacitance: \n");
  scanf("%f",&LC);
  printf("Enter the upper Capacitance: \n");
  scanf("%f",&UC);
  printf("Capacitance range between %f to %f \n\n\n",LC,UC);

  for(i=LC;i<=UC;i++)
   {
    Freq= sqrt((1/(L*i))-((R*R)/(4*i*i)));
    printf("The Frequency is: %0.9f \n",Freq);
   }
 }
