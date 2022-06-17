#include<stdio.h>

main()
{
    int n,s,c;

    n=100;
    s=c=0;

    loop:
        if(n%7==0)
        {
            s=s+n;
            c=c+1;
        }
        n=n+1;
        if(n<=200)
    goto loop;

    printf("Sum=%d\n",s);
    printf("Count=%d",c);
}
