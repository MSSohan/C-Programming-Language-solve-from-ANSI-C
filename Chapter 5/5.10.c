#include<stdio.h>
#include<math.h>
main()
{
    float a,b,c;
    float d,root,root1,root2;
    printf("Enter a,b and c of quadratic equation:");
    scanf("%f %f %f",&a,&b,&c);

    d=(b*b)-(4*a*c);

    if(a==0 && b==0)
        printf(" There is no solution of the quadratic equation");
    else if(a==0)
    {
        root=-c/b;
        printf(" There is only one root of the equation is %f\n",root);
    }
    else if(d<0)
    {
        printf("Roots are complex number.\n");
        printf("Roots of quadratic equation are:");
        printf("%.3f+%.3fi & ",-b/(2*a),sqrt(-d)/(2*a));
        printf("%.3f-%.3fi \n",-b/(2*a),sqrt(-d)/(2*a));
    }
    else if(d==0)
    {
        printf("Both roots are equal.\n");
        root=-b/(2*a);
        printf("Root of quadratic equation:%.3f",root);
    }
    else
    {
        printf("Roots are real number.\n");
        root1=(-b+sqrt(d))/(2*a);
        root2=(-b-sqrt(d))/(2*a);
        printf("Roots of quadratic equation are:%.3f & %.3f \n",root1,root2);
    }
    printf("\n");
}
