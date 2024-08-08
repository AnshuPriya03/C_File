#include<stdio.h>
#include<stdlib.h>
#include<math.h>
void main()
{
    float a,b,c,d,real,imag,r1,r2;
    printf("Enter the coefficient of quadratic equation\n");
    scanf("%f%f%f",&a,&b,&c);
    d=b*b-4*a*c;
    if(d==0);
    {
    printf("Roots are real and equal\n");
    r1=r2=-b/(2*a);
    printf("root1=root2=%f\n");
    }

        if(d>0);
        {
        printf("Roots are real\n");
        r1=(-b+sqrt(d))/(2*a);
        r2=(-b-sqrt(d))/(2*a);
        printf("root1=r1,root2=r2\n",r1,r2);
        }






    }

