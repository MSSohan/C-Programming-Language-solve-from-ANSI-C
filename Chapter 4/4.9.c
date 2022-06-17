#include<stdio.h>
void main()
{
    char Str1[10]="ANIL";
    char Str2[10]="KUMAR";
    char Str3[10]="GUPTA";

    printf("%s %0.1s. %s \n",Str1,Str2,Str3);
    printf("%0.1s.%0.1s. %s \n",Str1,Str2,Str3);
    printf("%s %0.1s.%0.1s. \n",Str3,Str1,Str2);
}
