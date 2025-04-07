#include<stdio.h>
int main()
{
    double a1, b1, c1, a2, b2, c2, d, x, y;
    printf("Put the value of a1, b1, c1, a2, b2, c2:");
    scanf("%lf %lf %lf %lf %lf %lf",&a1, &b1, &c1, &a2, &b2, &c2);
    d=(a1*b2-a2*b1);
    if(d==0)
    {
        printf("The value of x and y can not be determined.");
    }
    else
    {
    x=(b2*c1-c2*b1)/d;
    y=(a1*c2-a2*c1)/d;
    printf("The value of x is %.2lf\nThe value of y is %.2lf",x,y);
    return 0;
    }
    }
