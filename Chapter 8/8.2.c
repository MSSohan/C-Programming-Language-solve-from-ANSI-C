#include<stdio.h>
#include<string.h>
main()
{
    int n=0;
    do
    {
    char str1[20];
    char str2[20]="Dennis Ritchie";
    printf("Who is the inventor of C?\n");
    gets(str1);
    if(strcmp(str1,str2)==0)
       {
          printf("Good");
          break;
       }
    else
          printf("Try again\n");
    n=n+1;
    }
    while(n<3);
    if(n==3)
        printf("The right answer is Dennis Ritchie");
    exit(0);
}
